/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arr.test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 21:33:16 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 22:53:28 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <assert.h>

void	ft_sort_arr(char **tab, int size);

int	main(void)
{
	char *tab[3];
	
	tab[0] = strdup("aaa");
	tab[1] = strdup("az");
	tab[2] = strdup("abc");

	ft_sort_arr(tab, 3);

	assert(strcmp(tab[0], "aaa") == 0);
	assert(strcmp(tab[1], "abc") == 0);
	assert(strcmp(tab[2], "az") == 0);
	printf("ft_sort_arr OK!\n");
	return (0);
}
