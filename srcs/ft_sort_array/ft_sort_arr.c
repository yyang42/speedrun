/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 21:29:56 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 22:38:40 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_strcmp/ft_strcmp.c"
#include "../ft_strdup/ft_strdup.c"

static void		strswap(char **s1, char **s2)
{
	char	*temp;

	temp = ft_strdup(*s1);
	free(*s1);
	*s1 = ft_strdup(*s2);
	free(*s2);
	*s2 = temp;
}

void	ft_sort_arr(char **tab, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(tab[j + 1], tab[j]) < 0)
				strswap(&tab[j + 1], &tab[j]);
			j++;
		}
		i++;
	}
}