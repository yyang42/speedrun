/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:51:23 by yyang             #+#    #+#             */
/*   Updated: 2015/01/04 22:46:26 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_strlen/ft_strlen.c"
#include "../ft_strcpy/ft_strcpy.c"
#include <stdlib.h>

char	*ft_strdup(char *s)
{
	char *d;

	d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_strcpy(d, s);
	return (d);
}
