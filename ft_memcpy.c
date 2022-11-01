/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:37:33 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 09:37:49 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void* src, size_t len)
{
	size_t	i;
	char *dst_;
	char *src_;

	i = 0;
	dst_ = (char*)dst;
	src_ = (char*)src;
	while (len > i)
	{
		dst_[i] = src_[i];
		i++;
	}
	return(dst_);
}

