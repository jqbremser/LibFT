/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:25:10 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/10 17:49:21 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	j;

	j = 0;
	if (start > (ft_strlen(s) - 1))
		return ((char *)ft_calloc(1, 1));
	if (len > (ft_strlen(s + start)))
		len = (ft_strlen(s + start));
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s[start] && j < len)
		dst[j++] = s[start++];
	dst[j] = '\0';
	return (dst);
}
