/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:39:49 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 13:58:01 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_;
	char	*src_;

	i = 0;
	dst_ = (char *)dst;
	src_ = (char *)src;
	if (src > dst)
		while (len > i)
		{
			dst_[i] = src_[i];
			i++;
		}
	else
	{
		i = 0;
		while (len > i)
		{
			dst_[len - 1 - i] = src_[len - 1 - i];
			i++;
		}
	}
	dst_[len - 1] = '\0';
	return (ft_strlen(dst_));
}
