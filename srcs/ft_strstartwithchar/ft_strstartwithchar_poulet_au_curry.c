/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartwithchar_poulet_au_curry.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:53:46 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 20:59:18 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	ft_strstartswith("ab", "ab");
	assert(ft_strstartswith("abc", "ab") == 1);
	assert(ft_strstartswith("ab", "a") == 1);
	assert(ft_strstartswith("a", "ab") == 0);
	printf("OK ft_strstartswith\n");
	return (0);
}