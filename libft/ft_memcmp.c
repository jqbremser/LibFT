/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:15:30 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/09 16:56:31 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1a;
	unsigned char	*s2a;

	i = 0;
	s1a = (unsigned char *)s1;
	s2a = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1a[i] - s2a[i] == 0)
			i++;
		else
			return (s1a[i] - s2a[i]);
	}
	return (0);
}
/*
int main(void)
{
	unsigned char s1[] = "t\200";
	unsigned char s2[] = "t\0";



	printf("mine: %i\n", ft_memcmp(s1, s2, 2));
	printf("actual: %i\n", memcmp(s1, s2, 2));
	printf("mine: %i\n", ft_memcmp(s1, s2, 2));
	printf("actual: %i\n", memcmp(s1, s2, 2));
 	printf("mine: %i\n", ft_memcmp(s1, s2, 2));
	printf("actual: %i\n", memcmp(s1, s2, 2));
}*/
