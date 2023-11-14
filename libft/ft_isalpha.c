/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:57:48 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/03 14:12:13 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 & c <= 90) || (c >= 97 & c <= 122))
		return (1);
	else
		return (0);
}

/* int main(void)
{ 
	
	int a = '6';
	printf("new6:%d\n", ft_isalpha(a));
	printf("old6:%d\n", isalpha(a));

	int b = 'a';
	printf("newa:%d\n", ft_isalpha(b));
	printf("olda:%d\n", isalpha(b));
	
	int c = 'A';
	printf("newA:%d\n", ft_isalpha(c));
	printf("oldA:%d\n", isalpha(c));

	int d = '.';
	printf("new.:%d\n", ft_isalpha(d));
	printf("old.:%d\n", isalpha(d));
} 
*/
