/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:07:02 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/03 14:12:31 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 & c <= 90) || (c >= 97 & c <= 122))
		return (1);
	else if (c >= 48 & c <= 57)
		return (1);
	else
		return (0);
}

/*int main(void)

{
	int a = '6';
	printf("new6:%d\n", ft_isalnum(a));
	printf("old6:%d\n", isalnum(a));

	int b = 'a';
	printf("newa:%d\n", ft_isalnum(b));
	printf("olda:%d\n", isalnum(b));

	int c = 'A';
	printf("newA:%d\n", ft_isalnum(c));
	printf("oldA:%d\n", isalnum(c));

	int d = '.';
	printf("new.:%d\n", ft_isalnum(d));
	printf("old.:%d\n", isalnum(d));
}*/
