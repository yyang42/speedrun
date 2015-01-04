/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:49:47 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:15:59 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int		main(void)
{
	assert(ft_strnequ("abc", "abcd", 3) == 1);
	assert(ft_strnequ("abcd", "ab", 3) == 0);
	printf("ft_strnequ OK!\n");
	return (0);
}