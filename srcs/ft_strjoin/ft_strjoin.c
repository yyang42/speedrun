/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 21:16:10 by yyang             #+#    #+#             */
/*   Updated: 2015/01/04 21:28:58 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_strlen/ft_strlen.c"
#include "../ft_strcat/ft_strcat.c"
#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2)
{
	char *s;

	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	ft_strcat(s, s1);
	ft_strcat(s, s2);
	return (s);
}
