/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 21:33:16 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 22:08:29 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

void	ft_sort_int(int *tab, int size);

int	main(void)
{
	int tab[5] = {8,6,0,42,21};
	
	ft_sort_int(tab, 5);
	assert(tab[0] == 0);
	assert(tab[1] == 6);
	assert(tab[2] == 8);
	assert(tab[3] == 21);
	assert(tab[4] == 42);
	printf("ft_sort_int OK!\n");
	return (0);
}