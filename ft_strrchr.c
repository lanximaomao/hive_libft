/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:32:12 by lsun              #+#    #+#             */
/*   Updated: 2022/11/02 21:27:12 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the last occurrence of c
*/

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (!s && c != 0)
		return (NULL);
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	s = s + ft_strlen(s) - 1;
	while (*s && s && len > 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		len--;
		s--;
	}
	return (NULL);
}
