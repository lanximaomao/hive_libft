/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:32:12 by lsun              #+#    #+#             */
/*   Updated: 2022/11/15 10:38:42 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the last occurrence of c
*/

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	int				i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	len = ft_strlen(s);
	while (len >= i)
	{
		if (s[len - i] == a)
			return ((char *)(s + len - i));
		i++;
	}
	return (NULL);
}
