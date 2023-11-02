/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:03:37 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/02 15:19:26 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	
	while (s1[i] & s2[i] && i < n)
	{
		if (s1[i] - s2[i] != 0 || i !=n)
		{
			return(s1[i] - s2[i]);
			i++;
		}
	}
	return (0);
}

int main(void)
{
	char s1[] = "!@#$000";
	char s2[] = "Bye There!";

	printf("%d\n", ft_strncmp(s1, s2, 9));
	printf("%d\n", strncmp(s1, s2, 9));
}
