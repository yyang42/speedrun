/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_lasagne.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:55:17 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:07:36 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int		main(void)
{
	assert(ft_strcmp(ft_itoa(123), "123") == 0);
	assert(ft_strcmp(ft_itoa(123), "23") != 0);
	printf("OK ft_itoa\n");
	return (s);
}