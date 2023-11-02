/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:15:43 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/26 16:29:28 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = (c + 32);
		return (c);
	}
	else
		return (c);
}
/*
int main(void)
{

	int a = '6';
	printf("new6:%c\n", ft_tolower(a));
	printf("old6:%c\n", tolower(a));

	int b = 'a';
	printf("newa:%c\n", ft_tolower(b));
	printf("olda:%c\n", tolower(b));

	int c = 'A';
	printf("newA:%c\n", ft_tolower(c));
	printf("oldA:%c\n", tolower(c));

	int d = '.';
	printf("new.:%c\n", ft_tolower(d));
	printf("old.:%c\n", tolower(d));
}*/






