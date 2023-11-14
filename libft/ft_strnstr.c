/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:37:00 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 17:59:58 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (ft_strlen(n) == 0 || (!(h) && len == 0 ))
		return (h);
	while ((h[i] && i < len) && (ft_strlen(n) <= (len - i)))
	{
		if ((ft_strncmp(h + i, n, (ft_strlen(n)))) == 0)
			return (h + i);
		else
			i++;
	}
	return (0);
}
/*
int main(void)
{
	char h[] = "lorem ipsum dolor sit amet";
	char n[] = "dolor";
	char h2[] = "lorem ipsum dolor sit amet";
    char n2[] = "dolor";
	size_t len = 1999999999;

	printf("%s\n", ft_strnstr(h, n, len));
	printf("%s\n", strnstr(h2, n2, len));
}*/
