/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:01:29 by jbremser          #+#    #+#             */
/*   Updated: 2023/11/22 12:02:58 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	tsize;

	tsize = count * size;
	if (tsize < count && tsize < size)
		return (NULL);
	p = (void *)malloc(tsize);
	if (p == 0)
		return (NULL);
	ft_bzero(p, tsize);
	return (p);
}
