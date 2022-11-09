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
	size_t	needle_len;

	i = 0;
	// printf("%lu", len);
	if(!haystack || !*haystack || !needle)
		return(NULL);
	if (needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while ( i < len && haystack[i] && len >= needle_len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			if (i + needle_len <= len)
				return((char*)haystack + i);
		i++;
	}
	return(NULL);
}

int main()
{
	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	printf("%s\n",ft_strnstr(haystack, needle, -1));
	// printf("%s\n",ft_strnstr(haystack, "cd", 8)); 
	printf("%s\n",ft_strnstr(haystack, "", -1));
	printf("%s\n",ft_strnstr(haystack, "", 0));
// 	printf("%s\n",ft_strnstr(haystack, "aaabc", 5));
// 	printf("%s\n",ft_strnstr(haystack, "abcd", 9));

// /* 5 */ check(ft_strnstr(empty, "", -1) == empty); showLeaks();
// /* 6 */ check(ft_strnstr(empty, "", 0) == empty); showLeaks();

	return(0);
}
