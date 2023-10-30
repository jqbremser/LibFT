/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:58:32 by jbremser          #+#    #+#             */
/*   Updated: 2023/10/27 09:47:33 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

const char *ft_strchr(const char *s, int c)
{
	int len;
	char ch;

	len = 0;
	ch = (char)c;

	while (s[len] != '\0')
	{
		if (s[len] == c)
			return (&s[len]);
		else
			len++;
	}
	return (0);
}
/*
int main() 
{
    const char *testString = "Hello, World!";
    int characterToFind = 'o';

    const char *result = ft_strchr(testString, characterToFind);

    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", characterToFind, result - testString);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", characterToFind);
    }

    return 0;
}

int main(void)
{
	char s[] =  "Hey there";
	int c = 'y';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr (s, c));
} */ 





