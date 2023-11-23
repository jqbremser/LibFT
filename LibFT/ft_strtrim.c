/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:45:11 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/16 15:43:58 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*n;
	const char	*start;
	const char	*end;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_calloc(1, 1));
	start = s1;
	end = s1 + ft_strlen(s1);
	while (*start && ft_strchr(set, *start))
		start++;
	while (ft_strchr(set, *end) != 0 && end > start)
		end--;
	len = end - start + 2;
	n = ft_calloc(len, sizeof(char));
	if (n == (NULL))
		return (NULL);
	ft_strlcpy(n, start, len);
	return (n);
}
