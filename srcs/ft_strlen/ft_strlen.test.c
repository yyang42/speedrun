/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:57:49 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:17:33 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int		main(void)
{
	assert(ft_strlen("abc") == 3);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("raclette") == 8);
	printf("ft_strlen OK BITCH !!\n");
    return (0);
}