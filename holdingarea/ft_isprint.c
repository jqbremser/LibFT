/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:09:43 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/24 15:34:50 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 & c <= 127)
		return (1);
	else
		return (0);
}
/*
int main(void)
{

	int a = 128;
	printf("new6:%d\n", ft_isprint(a));
	printf("old6:%d\n", isprint(a));

	int b = 'a';
	printf("newa:%d\n", ft_isprint(b));
	printf("olda:%d\n", isprint(b));

	int c = 'A';
	printf("newA:%d\n", ft_isprint(c));
	printf("oldA:%d\n", isprint(c));

	int d = '.';
	printf("new.:%d\n", ft_isprint(d));
	printf("old.:%d\n", isprint(d));
} */



