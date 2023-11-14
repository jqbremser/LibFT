/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:26:02 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/14 15:36:24 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	strcount(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	ft_strtrim(s, &c);
	while (s[i])
		if (s[i] != c)
			i++;
		else if (s[i] == c)
		{
			i++;
			j++;
			while (s[i] == c)
				i++;
		}
	return (j);
}


int	slen(char const *s, char c)
{
	int i;
	int j;

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

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	char	**splitstr;
	int		start;
	int		i;

	i = 0;
	ft_strtrim(str, &c);
	wordcount = strcount(str, c);
	splitstr = (char **)malloc((wordcount + 1) * sizeof(char *));
	while (s[])
	{
		start = slen(s, &c);
		splitstr[i] = ft_substr(s, 0, slen(s + i));
		s += start;
	}


int main(void)
{
	char s[] = "Hello  world  here we are  ";

	printf("%d\n", slen(&s[7], ' '));
}
