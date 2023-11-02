/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:37:00 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/02 15:19:24 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (!n || i > len)
		return (h);
	while (h[i] && i < len)
	{
		if ((strncmp(h + i, n, strlen(n)) == 0))
			return (h + i);
		else
			i++;
	}
	return (0);
}

int main(void)
{
	char h[] = "There is no way that you will find this needle in this haystack";
	char n[] = "needle";

	printf("%s\n", ft_strnstr(h, n, 63));
	printf("%s\n", strnstr(h, n, 63));
}
