/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:51:23 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 13:58:52 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen((char *)needle) > ft_strlen((char *)haystack)
		|| ft_strlen((char *)needle) > (int)len)
		return (0);
	if (needle == '\0')
		return ((char *)haystack);
	while (i < ft_strlen((char *)haystack) && i < (int)len
		&& j < ft_strlen((char *)needle))
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (j == ft_strlen((char *)needle))
		return ((char *)haystack + j);
	else
		return (0);
}
