/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:32:13 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/30 13:41:37 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *p;

	p = b; //read about explicit type conversion
	i =  0;

	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
		return (p);
}

int main(void)
{
	//char c = 'c';
	char str[] = "7777777";

	printf("Mine:%s\n", ft_memset(str, 'a', 3));
	printf("Real:%s\n", memset(str, 'a', 3));
}







