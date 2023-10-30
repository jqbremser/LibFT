/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:52:06 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/26 12:18:52 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <ctype.h>

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = (c - 32);
		return (c);
	}
	else
		return (c);
}
/*
int main(void)
{

	int a = '6';
	printf("new6:%c\n", ft_toupper(a));
	printf("old6:%c\n", toupper(a));

	int b = 'a';
	printf("newa:%c\n", ft_toupper(b));
	printf("olda:%c\n", toupper(b));

	int c = 'A';
	printf("newA:%c\n", ft_toupper(c));
	printf("oldA:%c\n", toupper(c));

	int d = '.';
	printf("new.:%c\n", ft_toupper(d));
	printf("old.:%c\n", toupper(d));
}*/






