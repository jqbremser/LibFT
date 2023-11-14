/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:45:11 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 16:57:37 by jbremser         ###   ########.fr       */
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
	start = s1;
	end = &s1[ft_strlen(s1)];
	while (ft_strchr(set, *start) != 0 && *start)
		start++;
	while (ft_strrchr(set, *end) != 0 && end > start)
		end--;
	len = end - start + 2;
	n = ft_calloc(len, sizeof(char));
	if (n == (NULL))
		return (NULL);
	ft_strlcpy(n, start, len);
	return (n);
}
/*
int main(void)
{
	char const s1[] = "          ";
	char const set[] = " ";

	printf("%s\n", ft_strtrim(s1, set));
}*/
