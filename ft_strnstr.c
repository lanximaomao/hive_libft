/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:51:23 by lsun              #+#    #+#             */
/*   Updated: 2022/11/02 22:19:52 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* to be fixed*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) > ft_strlen(haystack)
		|| ft_strlen(needle) > len)
		return (0);
	if (needle == '\0')
		return ((char *)haystack);
	while (i < ft_strlen(haystack) && i < len
		&& j < ft_strlen(needle))
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (j == ft_strlen(needle))
		return ((char *)haystack + j);
	else
		return (0);
}
