/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 21:48:07 by yyang             #+#    #+#             */
/*   Updated: 2015/01/04 22:00:59 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>

char	*ft_strstr(char *s1, char *s2);

int		main(void)
{
	assert(strcmp(ft_strstr("abc.", "b"), "bc.") == 0);
	assert(strcmp(ft_strstr("aaab.", "aab"), "aab.") == 0);
	printf("ft_strstr OK!\n");
	return (0);
}
