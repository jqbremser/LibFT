/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:34:17 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 11:06:56 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;
	size_t	tlen;

	slen = 0;
	dlen = (ft_strlen(dst));
	tlen = (ft_strlen(dst) + ft_strlen(src));
	if (dstsize < dlen || dstsize == 0)
		return (ft_strlen(src) + dstsize);
	while (src[slen] && (dlen < (dstsize - 1)))
		dst[dlen++] = src[slen++];
	dst[dlen] = '\0';
	return (tlen);
}
/*
int	main(void)
{
	char			dstr[15] = "Joe ";
	char			sstr[] = "Bremser";

	printf("%zu \n", ft_strlcat(dstr, sstr, 15));
	printf("%s \n", dstr);

	char			str3[15] = "Joe ";
	char			str4[] = "Bremser";

	printf("%zu \n", strlcat(str3, str4, 15));
	printf("%s \n", str3);
}*/
