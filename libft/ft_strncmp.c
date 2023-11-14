/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:03:37 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/09 17:19:53 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1a;
	unsigned char	*s2a;
	size_t			i;

	i = 0;
	s1a = (unsigned char *)s1;
	s2a = (unsigned char *)s2;
	while (((s1a[i]) || (s2a[i])) && i < n)
	{
		if (s1a[i] != s2a[i])
			return (s1a[i] - s2a[i]);
		else
			i++;
	}
	return (0);
}
/*
int main(void)
{
	char s1[] = "test\200";
	char s2[] = "test\0";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", strncmp(s1, s2, 6));
}*/
