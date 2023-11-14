/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:58:32 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 17:00:54 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;
	char	ch;

	len = 0;
	ch = (char)c;
	while (s[len] != '\0')
	{
		if (s[len] == ch)
			return ((char *)&s[len]);
		else
			len++;
	}
	if (ch == 0)
		return ((char *)&s[len]);
	return (0);
}
/*int main(void)
{
	char s[] = "Find the eye";

	printf("mine: %s\n", ft_strchr(s, 'i'));
	printf("actual: %s\n", strchr(s, 'i'));
}*/
