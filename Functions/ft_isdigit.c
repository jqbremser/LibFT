/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:49:06 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/24 12:02:50 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 & c <= 57)
		return (1);
	else
		return (0);
}

/*int main(void)
{

	int a = '6';
	printf("new6:%d\n", ft_isdigit(a));
	printf("old6:%d\n", isdigit(a));

	int b = 'a';
	printf("newa:%d\n", ft_isdigit(b));
	printf("olda:%d\n", isdigit(b));

	int c = 'A';
	printf("newA:%d\n", ft_isdigit(c));
	printf("oldA:%d\n", isdigit(c));

	int d = '.';
	printf("new.:%d\n", ft_isdigit(d));
	printf("old.:%d\n", isdigit(d));
} */




