/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_raclette.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:57:49 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 21:00:18 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	assert(ft_strlen("abc") == 3);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeab") == 42);
    return (0);
}