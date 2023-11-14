/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:26:02 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/14 11:38:57 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//char	**ft_split(char const *s, char c)
//{
//}

int	scount(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_strtrim(s, &c);
	while (s[i])
		if (s[i] != c)
			i++;
		else if (s[i] == c)
		{
			i++;
			j++;
			while (s[i] == c)
				i++;
		}
	return (j);
}

int main(void)
{
	char s[] = " Hello  world  here we are  ";

	printf("%d\n", scount(s, ' '));
}
