/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:45:52 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:23:32 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
		return (((char *)s1)[i] - ((char *)s2)[i]);
		i++;
	}
	return (0);
}