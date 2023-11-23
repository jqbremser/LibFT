/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:03:28 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/20 12:26:00 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	numlen(int nb)
{
	size_t	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = (nb * -1);
	}
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	len = numlen(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = ft_calloc(numlen(n) + 1, sizeof(char));
	if (s == 0)
		return (NULL);
	if (n < 0)
	{
		n = (n * -1);
		s[0] = '-';
	}
	while (n > 0)
	{
		s[len-- -1] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}
