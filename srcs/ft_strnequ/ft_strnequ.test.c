/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:49:47 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:51:03 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int		ft_strnequ(char *s1, char *s2, int n);

int		main(void)
{
	assert(ft_strnequ("abc", "abcd", 3) == 1);
	assert(ft_strnequ("abcd", "ab", 3) == 0);
	printf("ft_strnequ OK!\n");
	return (0);
}