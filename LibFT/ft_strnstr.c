/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:37:00 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/16 14:20:36 by jbremser         ###   ########.fr       */
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
	if (ft_strlen(n) == 0 || (!(h) && len == 0))
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
