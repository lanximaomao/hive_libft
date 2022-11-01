/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:30:46 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 16:33:19 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**locates the first ccurrence of c, in a string.
**a pointer to the byte located or null is returned.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*first;

	i = 0;
	first = (char *)s;
	while (i < n)
	{
		if (first[i] == c)
			return (&first[i]);
		i++;
	}
	return (0);
}
