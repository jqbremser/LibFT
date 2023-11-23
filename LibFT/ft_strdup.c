/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:32:39 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/20 11:51:18 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*m;

	m = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (m == NULL)
		return (0);
	ft_strlcpy(m, s, (ft_strlen(s) + 1));
	return (m);
}
