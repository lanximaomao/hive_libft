/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:45:33 by lsun              #+#    #+#             */
/*   Updated: 2022/11/02 21:31:48 by lsun             ###   ########.fr       */
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


	//memset!
	//char str1[50] = "abcdefg";
	//char str2[50] = "abcdefg";

	//memset(str1, 90, 49);
	//printf("memset_no1 %s\n", str1);

	//ft_memset(str2, 90, 49);
	//printf("memset_no2 %s\n", str2);

	//bzero
	//memcpy!
	//const char s4[] = "12";
	//char s5[100] = "abcd";
	//char s6[100] = "abcd";
	//printf("memcpy_no1 %s\n", memcpy(NULL, NULL, 0));
	//printf("memcpy_no2 %s\n", ft_memcpy(NULL, NULL, 0));
	//printf("memcpy_no1 %s\n", memcpy(s5, s4, 20));
	//printf("memcpy_no2 %s\n", ft_memcpy(s6, s4, 20));

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




//	//memmove!
	//char str1[50];
	//char str2[50];

	//strcpy(str1, "aa");
	//strcpy(str2, "bbcc");

	//memmove(str1, str2, 3);
	//puts(str1);
	//ft_memmove(str1, str2, 3);
	//puts(str1);
//	//strlcpy
//	//strlcat!

	//char dst1[100] = "aaaaa";
	//char dst2[100] = "aaaaa";
    //char src[] = "he!";
    //printf("%lu\n",strlcat(dst1, src, 100));
    //puts(dst1);
	//printf("%lu\n",ft_strlcat(dst2, src, 100));
    //puts(dst2);
	//return(0);

//	//toupper
//	//tolower
//	//strchr!
	//printf("%s\n", strchr("a*a", 42));
	//printf("%s\n", ft_strchr("a*a", 42));


//	//strrchr!

	//printf("%s\n", strrchr("a*a*aaa", 42));
	//printf("%s\n", ft_strrchr("a*a*aaa", 42));


//	//strncmp
	//const char s1[] = "ldfadfafdfaa";
	//const char s2[] = "ldfa;zvzdfaa";
	//printf("%d\n", strncmp(s1, s2, 8));
	//printf("%d\n", ft_strncmp(s1, s2, 8));

//	//memchr!
	//char s1[20] = "helZlo world";
	//printf("memchr %s\n", memchr(s1, 90, 100));
	//printf("ft_memchr %s\n", memchr(s1, 90, 100));
//	//memcmp

//	printf("%d\n", memcmp(s1, s2, 20));
//	printf("%d\n", ft_memcmp(s1, s2, 20));
//	//strnstr
//	//atoi

//	return(0);
//}

//int main()
//{

//	return(0);
//}


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

//int main()
//{

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


//int main()
//{
//	printf("%d\n", ft_tolower(6));
//	printf("%d\n", tolower(6));
//	return(0);
//}

//int main()
//{
//	char* str;
//	int i;
//	//char *s1;
//	i = 0;
//	str = ft_calloc(10, 1);
//	//s1 = (char*)str;
//	while (i < 10)
//	{
//		printf("%d", str[i]);
//		i++;
//	}
//	return(0);
//}



	printf("%s", ft_strdup("hello"));




	return(0);
}
