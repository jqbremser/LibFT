/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:36:38 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 17:45:37 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		else
			i++;
	}
	return (0);
}
/*
int main(void)
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	int tab1[7] = {-49, 49, 1, -1, 0, -2, 2};
	char s[] = "\0";


    printf("mine: %s\n", ft_memchr(s, '\0', 7));
	printf("actual: %s\n", memchr(s, '\0', 7));
	printf("mine: %s\n", (char *)ft_memchr(tab, -1, 7));
	printf("actual: %s\n", (char *)memchr(tab1, -1, 7));
}*/
