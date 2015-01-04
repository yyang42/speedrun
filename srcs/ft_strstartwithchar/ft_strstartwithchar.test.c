/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartwithchar.test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:53:46 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:11:15 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int		main(void)
{
	ft_strstartswith("ab", "ab");
	assert(ft_strstartswith("abc", "ab") == 1);
	assert(ft_strstartswith("ab", "a") == 1);
	assert(ft_strstartswith("a", "ab") == 0);
	printf("OK ft_strstartswith\n");
	return (0);
}
