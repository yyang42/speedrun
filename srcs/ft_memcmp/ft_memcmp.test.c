/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:45:52 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:25:29 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>

int		main(void)
{
	assert(ft_memcmp("", "", 1) == 0);
	assert(ft_memcmp("ab", "ab", 2) == 0);
	assert(ft_memcmp("ac", "ab", 2) > 0);
	assert(ft_memcmp("aa", "ab", 2) < 0);
	printf("OK ft_strcmp\n");
	return (0);
}
