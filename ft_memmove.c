/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:33:08 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 09:38:08 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void* src, size_t len)
{
	size_t	i;
	char *dst_;
	char *src_;

	i = 0;
	dst_ = (char*)dst;
	src_ = (char*)src;

	if(src > dst)
		while (len > i)
		{
			dst_[i] = src_[i];
			i++;
		}
	i= 0;
	if(src <= dst)
	{
		while (len > i)
		{
			dst_[len-1-i] = src_[len-1-i];
			i++;
		}
	}
	return(dst_);
}
