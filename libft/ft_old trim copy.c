/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:45:11 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 14:33:59 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*n;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strrchr((char)set, &s1[start]) != 0)
		start++;
	while (ft_strrchr((char)set, &s1[end]) != 0)
	   end--;
	len = end - start;
	n = ft_calloc(len, sizeof(char));
	if (n == (NULL))
		return (NULL);
	ft_strlcpy(n, &s1[start], len);
	return (n);
}

int main(void)
{
	char const s1[] = "abc Hello abc";
	char const set[] = "abc";

	printf("%s\n", ft_strtrim(s1, set));
}
