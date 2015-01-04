/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_jambon.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:45:52 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:00:27 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		main(void)
{
	assert(ft_memcmp("ab", "ab") == 0);
	assert(ft_memcmp("ac", "ab") > 0);
	assert(ft_memcmp("aa", "ab") < 0);
	printf("OK ft_strcmp\n");
	return (0);
}
