/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:36:38 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 17:41:15 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while ((n - 1) > 0)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
		n--;
	}
	if (n == 0 && *str == 0)
		return (NULL);
	return (0);
}
/*
int main(void)
{
	int tab[7] = {-49, 49, '\0', -1, 0, -2, 2};
	int tab1[7] = {-49, 49, '\0', -1, 0, -2, 2};
	char s[] = "\0";


    printf("mine: %s\n", ft_memchr(s, '\0', 7));
	printf("actual: %s\n", memchr(s, '\0', 7));
	printf("mine: %s\n", (char *)ft_memchr(tab, '\0', 7));
	printf("actual: %s\n", (char *)memchr(tab1, '\0', 7));
}*/
