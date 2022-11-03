/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:39:49 by lsun              #+#    #+#             */
/*   Updated: 2022/11/03 15:20:09 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** how to create a seg fault?
** strlcpy(((void *)0), ((void *)0), 10);
*/

size_t	ft_strlcpy(void *dst, const void *src, size_t dstsize)
{
	char	*dst_;
	char	*src_;

	dst_ = (char *)dst;
	src_ = (char *)src;
	if (!src || !dst)
		return (0);
	if (!dstsize)
		return (ft_strlen((const char *)src_));
	if (*src_ == '\0')
		*dst_ = '\0';
	while (dstsize > 1 && *src_ != '\0')
	{
		*dst_ = *src_;
		dst_++;
		src_++;
		dstsize--;
	}
	*dst_ = '\0';
	return (ft_strlen((const char *)src));
}
