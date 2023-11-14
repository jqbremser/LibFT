/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:29:48 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/07 15:31:40 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dst;
	size_t dstsize;
	dst = ((char *)malloc(sizeof(*dst) * 15)); 


	ft_memset(dst, 0, 15);
	ft_memset(dst, 'r', 6);
	dstsize = 0;
	printf("%lu\n", strlcpy (dst, src, dstsize));
	printf("%s\n", dst);
	printf("%lu\n", ft_strlcpy	(dst, src, dstsize));
	printf("%s\n", dst);
*/
