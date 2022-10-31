/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:37:33 by lsun              #+#    #+#             */
/*   Updated: 2022/10/31 17:19:52 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void* src, size_t len)
{
	int	i;
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

int main()
{
	char s1[] = "";
	char s2[] = "";
	char s3[] = "";
	char s4[] = "abcd";
	char s5[] = "abcd";
	char s6[] = "abcd";
	ft_memcpy(NULL, NULL, 0);
	puts(s1);
	memcpy(NULL, NULL, 0);
	puts(s3);
	return(0);
}
