/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:39:49 by lsun              #+#    #+#             */
/*   Updated: 2022/10/30 14:44:08 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcpy(void *dst, const void* src, size_t len)
{
	int	i;
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
	else
	{
		i = 0;
		while (len > i)
		{
			dst_[len-1-i] = src_[len-1-i];
			i++;
		}
	}
	dst_[len - 1] = '\0';
	return(ft_strlen(dst_));
}

//int main()
//{
//	char dst[] = "aaaaa";
//	char src[] = "xxxxx";
//	char dst2[] = "aaaaa";

//	ft_strlcpy(dst, src, 2);
//	puts(dst);
//	strlcpy(dst2, src, 2);
//	puts(dst2);
//	return(0);
//}
