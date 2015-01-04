/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:55:17 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:14:35 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>

char	*ft_itoa(int n);

int		main(void)
{
	assert(strcmp(ft_itoa(123), "123") == 0);
	assert(strcmp(ft_itoa(123), "23") != 0);
	printf("OK ft_itoa\n");
	return (0);
}