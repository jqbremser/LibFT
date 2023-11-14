/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:02:16 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/09 09:52:10 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	blah;

	i = 0;
	neg = 1;
	blah = 0;
	while ((str[i] == ' ' ) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		blah = (blah * 10 + (str[i] - '0'));
		i++;
	}
	return (blah * neg);
}
/*
int main(void)
{
	char s[] = "+4886";

	printf("mine: %d\n", ft_atoi(s));
	printf("actual: %d\n", atoi(s));
}*/
