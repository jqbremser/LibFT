/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:54:36 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 17:10:24 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (!(dst) && !(src))
		return (ft_calloc(1, 1));
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
//line 28: can replace most of the function
//(unsigned char *)dst)[i] = ((unsigned char *)src)[i];
/*int main(void)
{
	char dst[] = "I am David";
	char src[] = "Joe is who I am";
	char dst1[] = "I am David";
	char src1[] = "Joe is who I am";

	printf("Mine:%s\n", ft_memcpy(dst, src, 3));
	printf("Actual:%s\n", memcpy(dst1, src1, 3));
}*/

/*
 * while (n--)
 * 	(unsigned char *)dst)[n] = ((unsigned char *)src)[n];
 * return (dst);
 *
 *
 *
 * */
