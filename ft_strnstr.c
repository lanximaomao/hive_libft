/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:51:23 by lsun              #+#    #+#             */
/*   Updated: 2022/11/11 15:44:48 by linlinsun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (i < len && haystack[i] && len >= needle_len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			if (i + needle_len <= len)
				return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
