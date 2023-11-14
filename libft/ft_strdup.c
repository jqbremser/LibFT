/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:32:39 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 17:16:53 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <errno.h>

char	*ft_strdup(const char *s)
{
	char	*m;

	m = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (m == NULL)
	{
		errno = ENOMEM;
		return (0);
	}
	ft_strlcpy(m, s, (ft_strlen(s) + 1));
	return (m);
}
/*
int main(void)
{
	char s[] = "\0";

	printf("mine: %s\n", ft_strdup(s));
	printf("actual: %s\n", strdup(s));
}*/
