/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:30:46 by lsun              #+#    #+#             */
/*   Updated: 2022/10/31 14:59:53 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char *first;

	i = 0;
	first = (char*)s;
	while (first[i] != c  && i < n)
	{
		i++;
	}
	if(first[i] == c)
		{
			first = first + i;
			return(first);
		}
	else
		return(0);
}
