/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 21:33:16 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:38:56 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int	main(void)
{
	int tab[5] = {8,6,0,42,21};
	
	ft_bubblesort(tab, 5);
	assert(tab[0] == 0);
	assert(tab[1] == 6);
	assert(tab[2] == 8);
	assert(tab[3] == 21);
	assert(tab[4] == 42);
	printf("ft_bubblesort OK BITCH !!\n");
	return (0);
}