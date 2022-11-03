/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:32:45 by lsun              #+#    #+#             */
/*   Updated: 2022/11/03 12:17:32 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** if I don't have line 27-28 (if dstsize == 0, return 0)
** unit test says: your strlcat crush when null parameter is sent with a size of 0. but why?
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!dst && !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen((char *)(src)));
	i = ft_strlen(dst);
	j = 0;
	k = i;
	if (dstsize < i)
		return (ft_strlen((char *)(src)) + dstsize);
	while (dstsize > i + 1 && src[j] != '\0')
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (k + ft_strlen((char *)(src)));
}
