/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:45:11 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/13 16:18:14 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*n;
	const char	*start;
	const char	*end;
	int			len;
	size_t		counter;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	end = &s1[ft_strlen(s1)];
	counter = 0;
	while (ft_strchr(set, *start) != 0 && counter < (strlen(s1) - 2))
	{
		start++;
		counter++;
	}
	while (ft_strrchr(set, *end) != 0 && counter > 1)
	{
		end--;
		counter--;
	}
	len = end - start + 2;
	if (len != 0 && len > 0)
	{
		n = ft_calloc(len, sizeof(char));
		if (n == (NULL))
			return (NULL);
		ft_strlcpy(n, start, len);
		return (n);
	}
	else
	{
		n = ft_calloc(1, 1);
		return (n);
	}
}

int main(void)
{
	char const s1[] = "          ";
	char const set[] = " ";

	printf("%s\n", ft_strtrim(s1, set));
}
