/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:03:37 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/20 12:41:18 by jbremser         ###   ########.fr       */
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
