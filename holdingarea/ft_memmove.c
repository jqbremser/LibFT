/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:26:56 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/31 15:58:29 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	d = dst;
	s = (unsigned char *)src;
	i = 0;

	while ((s[i] != '\0') && (i < len))
	{
		(d[i] = s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}

int main(void)
{
	char dst[] = "Goodbye World, GTFO";
	char src[] = "Hello World";
	char dst1[] = "Goodbye World, GTFO";
	char src1[] = "Hello World";

	ft_memmove(dst + 2, src, 13);
	printf("%s\n", dst);
	memmove(dst1 + 2, src1, 13);
	printf("%s\n", dst1);
}
