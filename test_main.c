/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:45:33 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 09:30:59 by lsun             ###   ########.fr       */
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


//void *ft_memmove(void *dst, const void *src, size_t len)
//{
//	int i;
//	char *new_dst;
//	char *new_src;

//	i = 0;
//	new_dst = (char*)dst;
//	new_src = (char*)src;

//	new_dst = new_dst + len;
//	new_src = new_src + len;

//	while (i < len)
//	{
//		new_dst = new_src;
//		new_dst--;
//		new_src--;
//		i++;
//	}
//	return(dst);
//}

/*
int main(void)
{
	char str1[50];
	char str2[50];

	strcpy(str1, "aa");
	strcpy(str2, "bbcc");
	puts(str1);

	memmove(str1, str2, 3);
	puts(str1);
	ft_memmove(str1, str2, 3);
	puts(str1);


	return(0);
}
*/


int	main(void)
{
	char str1[50];

	strcpy(str1, "aaaaaaaaaa");
	puts(str1);

	memset(str1, 90, 3);
	puts(str1);

	ft_memset(str1, 90, 3);
	puts(str1);

	return(0);
}

int main()
{
	printf("%s\n", strchr("abced", 90));
	printf("%s\n", ft_strchr("abced", 90));
	// printf("%s\n", strchr("aabbcdews", 99));
	// printf("%s\n", ft_strchr("aabbcdews", 99));
	// printf("%s\n", strrchr("a*a", 42));
	// printf("%s\n", ft_strrchr("a*a", 42));
	return(0);
}


//int main()
//{
//	char dst1[100] = "aaaaaaaaaaa";
//	char dst2[100] = "aaaaaaaaaaa";
//    char src[] = "he!";
//    printf("%lu\n",strlcat(dst1, src, 1));
//    puts(dst1);
//	printf("%lu\n",ft_strlcat(dst2, src, 1));
//    puts(dst2);
//	return(0);
//}

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


// int	main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "ll";
// 	printf("%s\n", ft_strnstr(s1, s2, 5));
// 	printf("%s\n", strnstr(s1, s2, 5));
// 	return(0);
// }


int main()
{
	printf("%d\n", ft_tolower(6));
	printf("%d\n", tolower(6));
	return(0);
}
