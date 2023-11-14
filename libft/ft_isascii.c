/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:24:23 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/06 10:14:56 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 & c <= 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{

	int a = -1;
	printf("new6:%d\n", ft_isascii(a));
	printf("old6:%d\n", isascii(a));

	int b = 'a';
	printf("newa:%d\n", ft_isascii(b));
	printf("olda:%d\n", isascii(b));

	int c = 'A';
	printf("newA:%d\n", ft_isascii(c));
	printf("oldA:%d\n", isascii(c));

	int d = '.';
	printf("new.:%d\n", ft_isascii(d));
	printf("old.:%d\n", isascii(d));
}*/
