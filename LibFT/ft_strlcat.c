/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:34:17 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/22 10:43:22 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;
	size_t	tlen;

	slen = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	dlen = (ft_strlen(dst));
	tlen = (ft_strlen(dst) + ft_strlen(src));
	if (dstsize < dlen || dstsize == 0)
		return (ft_strlen(src) + dstsize);
	while (src[slen] && (dlen < (dstsize - 1)))
		dst[dlen++] = src[slen++];
	dst[dlen] = '\0';
	return (tlen);
}
