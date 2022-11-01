/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:32:45 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 13:57:54 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	j = 0;
	k = ft_strlen(dst);
	if (dstsize <= i + 1)
		return (ft_strlen((char *)(src)) + dstsize);
	while (dstsize > i + 1 && src[j] != '\0')
	{
		dst[i++] = src[j++];
	}
	return (k + ft_strlen((char *)(src)));
}
