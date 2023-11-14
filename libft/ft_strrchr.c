/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:52:29 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 14:48:02 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = ft_strlen((char *)s);
	ch = (char)c;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		else
			i--;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (0);
}
/*
int	main(void)
{
	char s[] = "Find the ieye";

	printf("mine: %s\n", ft_strrchr(s, 'i'));
	printf("actual: %s\n", strrchr(s, 'i'));
}*/
