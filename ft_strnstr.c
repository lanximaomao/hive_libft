/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:51:23 by lsun              #+#    #+#             */
/*   Updated: 2022/11/09 16:47:15 by lsun             ###   ########.fr       */
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
	if (needle == '\0')
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack)
		|| ft_strlen(needle) > len || len == 0)
		return (NULL);
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
		return ((char *)haystack + i - j - 1);
	else
		return (0);
}

int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
//	printf("%s\n",ft_strnstr(haystack, needle, -1));
//	printf("%s\n",ft_strnstr(haystack, "a", -1));
//	printf("%s\n",ft_strnstr(haystack, "aaabc", 5));
	printf("%s\n",ft_strnstr(haystack, "abcd", 9));

	return(0);
}
