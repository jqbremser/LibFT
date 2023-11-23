/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:26:02 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/20 11:58:56 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	slen(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			return (j);
		}
		else
		{
			i++;
			j++;
		}
	}
	return (j);
}

static int	strcount(char const *s, char c)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (!i || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	char	**splstr;
	int		len;
	int		i;

	i = 0;
	wordcount = strcount(s, c);
	splstr = ft_calloc((wordcount + 1), sizeof(char *));
	if (splstr == 0)
		return (NULL);
	while (*s && *s == c)
		s++;
	while (*s)
	{
		len = slen(s, c);
		splstr[i] = ft_substr(s, 0, len);
		if (!splstr[i++])
			return (ft_free(splstr));
		s += len;
		while (*s && *s == c)
			s++;
	}
	return (splstr);
}
