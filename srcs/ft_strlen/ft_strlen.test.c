/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:57:49 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:09:40 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int		main(void)
{
	assert(ft_strlen("abc") == 3);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("raclette") == 42);
    return (0);
}