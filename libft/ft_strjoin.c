/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:23:04 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 11:44:58 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	size_t	len;
	size_t	i;

	if ((!s1) || (!s2))
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	n = ft_calloc(len, sizeof(char));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		n[i] = s1[i];
		i++;
	}
	ft_strlcat(n, s2, len);
	return (n);
}
/*
int	main(void)
{
	const char s1[] = "\0";
	const char s2[] = "Leo";
	const char s12[] = "\0";
	const char s22[] = "Leo";

	printf("%s\n", (ft_strjoin(s1, s2)));
	printf("%d\n", (strjoin(s12, s22)));
}*/
