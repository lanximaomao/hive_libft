/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:51:23 by lsun              #+#    #+#             */
/*   Updated: 2022/10/31 17:29:56 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	// const char *first;

	i = 0;
	j = 0;
	// first = haystack;
	if (ft_strlen((char*)needle) > ft_strlen((char*)haystack) || ft_strlen((char*)needle) > (int)len)
		return(0);
	if(needle == '\0')
		return((char*)haystack);
	while (i < ft_strlen((char*)haystack) && i < (int)len && j < ft_strlen((char*)needle))
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	if(j == ft_strlen((char*)needle))
		return((char*)haystack + j);
	else
		return(0);
}

// int	main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "ll";
// 	printf("%s\n", ft_strnstr(s1, s2, 5));
// 	printf("%s\n", strnstr(s1, s2, 5));
// 	return(0);
// }
