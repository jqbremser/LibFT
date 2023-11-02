/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:54:36 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/31 10:59:23 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned char *s;

	d = dst;
	s = (unsigned char *)src;
	i = 0;

	while (i < n && s[i] != '\0')
	{
		if (d[i] == s[i])
			i++;
		else
		{
			(d[i] = s[i]);
			i++;
		}
	}
	d[i] = '\0';
	return (d);
}

int main(void)
{
	char dst[] = "Joe is who i am";
	char src[] = "I am Joe";

	ft_memcpy(dst, src, 3);
	printf("%s\n", dst);
	memcpy(dst, src, 3);
	printf("%s\n", dst);
}
