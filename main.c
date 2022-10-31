/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:45:33 by lsun              #+#    #+#             */
/*   Updated: 2022/10/31 16:50:36 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	//isalpha
	//isdigit
	//isalnum
	//isascii
	//isprint
	//strlen
	//memset
	//bzero
	//memcpy
	//memmove
	//strlcpy
	//strlcat
	//toupper
	//tolower
	//strchr
	//strrchr
	//strncmp
	const char s1[] = "ldfa;jdfaa";
	const char s2[] = "ldfa;jdfaa";
	printf("%d\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s2, 3));

	//memchr
	//memcmp

	printf("%d\n", memcmp(s1, s2, 20));
	printf("%d\n", ft_memcmp(s1, s2, 20));
	//strnstr
	//atoi

	return(0);
}

int main()
{

	return(0);
}
