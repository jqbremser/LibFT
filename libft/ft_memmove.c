/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:26:56 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/07 11:29:07 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dst)
		return (NULL);
	d = dst;
	s = (unsigned char *)src;
	if (d == s)
		return (dst);
	if (d > s)
	{
		i = (len);
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*	{
		i = 0;
		while ((s[i] != '\0') && (d[i] != '\0') && (i < len))
		{
			(d[i] = s[i]);
			i++;
		}
	}
	return (dst);
} */
/*
int main(void)
{
	char dst[] = "Goodbye World, GTFO";
	char src[] = "Hello World";
	char dst1[] = "Goodbye World, GTFO";
	char src1[] = "Hello World";

	ft_memmove(src, dst, 7);
	printf("%s\n", src);
	memmove(src1, dst1, 7);
	printf("%s\n", src1);
}
*/
