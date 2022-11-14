/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:32:12 by lsun              #+#    #+#             */
/*   Updated: 2022/11/14 20:17:04 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** locates the last occurrence of c
*/

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	a;

	a = (char)c;
	if (!s && a != 0)
		return (NULL);
	len = ft_strlen(s);
	if (a == 0)
		return ((char *)s + ft_strlen(s));
	s = s + ft_strlen(s) - 1;
	while (len > 0)
	{
		if (*s == a)
			return ((char *)s);
		len--;
		s--;
	}
	return (NULL);
}
