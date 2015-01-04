/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 21:48:02 by yyang             #+#    #+#             */
/*   Updated: 2015/01/04 22:03:06 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_strlen/ft_strlen.c"
#include "../ft_memcmp/ft_memcmp.c"

char	*ft_strstr(char *s1, char *s2)
{
	while (*s1)
	{
		if (ft_memcmp(s1, s2, ft_strlen(s2)) == 0)
			return (s1);
		s1++;
	}
	return (NULL);
}
