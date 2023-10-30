/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:29:48 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/26 17:55:25 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
	int len;
	size_t i;

	len = 0;
	i = 0;
		
	while (src[len] > 0 && src[len] != '\0')
	{
		len++;
	}
	if (len == 0)
		return (0);
	else 
	{
		while (src[i] != '\0' && i < (dstsize - 1)) 
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (len);
	}
}

int main(void)
{
	char	src[] = "My name is Joe";
	char	dst[] = "Joe is my name";
	size_t dstsize;
	
	dstsize = 5;
	printf("%lu\n", strlcpy (dst, src, dstsize));
	printf("%s\n", dst);
	printf("%lu\n", ft_strlcpy	(dst, src, dstsize));
	printf("%s\n", dst);
}

