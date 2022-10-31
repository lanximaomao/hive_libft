/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:24:27 by lsun              #+#    #+#             */
/*   Updated: 2022/10/31 16:46:42 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char*s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return(s1[i] - s2[i]);
}

int	ft_memcmp(const void *s1, const void * s2, size_t n)
{
	size_t	i;
	unsigned char *s1_;
	unsigned char *s2_;

	i = 0;
	s1_ = (unsigned char*)s1;
	s2_ = (unsigned char*)s2;
	while (s1_[i] == s2_[i] && i < n)
		i++;
	return(s1_[i] - s2_[i]);
}

//int	ft_memcmp(const void *s1, const void * s2, size_t n)
//{
//	size_t	i;
//	unsigned char *s1_;
//	unsigned char *s2_;

//	i = 0;
//	s1_ = (unsigned char*)s1;
//	s2_ = (unsigned char*)s2;
//	while ( i < n )
//	{
//		if(s1_[i] != s2_[i])
//			return(s1_[i] - s2_[i]);
//		i++;
//	}
//	return(0);
//}
