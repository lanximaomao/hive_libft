/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:45:33 by lsun              #+#    #+#             */
/*   Updated: 2022/11/08 17:32:03 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void f(unsigned int a, char* str)
{
	printf("%d\n", a);
	printf("%s\n", str);
}

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

	//char dst[] = "aaaaa";
	//char src[] = "xxxxx";
	//char dst2[] = "aaaaa";

	//printf("%lu\n", ft_strlcpy(dst2, src, 4));
	//puts(dst2);
	//printf("%lu\n", strlcpy(dst, src, 4));
	//puts(dst);
	//return(0);
	strlcpy(((void *)0), ((void *)0), 10);

//	//strlcat!

	//char dst1[100] = "aaaaa";
	//char dst2[100] = "aaaaa";
    //char src[] = "he!";
    //printf("%lu\n",strlcat(dst1, src, 80));
    //puts(dst1);
	//printf("%lu\n",ft_strlcat(dst2, src, 80));
    //puts(dst2);
	//return(0);

//	//toupper
//	//tolower
//	printf("%d\n", ft_tolower(6));
//	printf("%d\n", tolower(6));
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

// split!
// int main()
// {
// 	int i;
// 	i = 0;
// 	char **str_arr;
// 	char s[] = "  hello world  ";
// 	str_arr = ft_split(NULL, ' ');
// 	printf("%s", *str_arr);
	// while (i < 3)
	// {
	// 	printf("%s\n", str_arr[i]);
	// 	i++;
	// }
	// return(0);
// }










// int	main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "ll";
// 	printf("%s\n", ft_strnstr(s1, s2, 5));
// 	printf("%s\n", strnstr(s1, s2, 5));
// 	return(0);
// }




//ft_strjoin!
//	char *s1 = "abc";
//	char *s2 = "12";
//	char *i1 = ft_strjoin(s1, s2);
//	char *i2 = ft_strjoin(s1, s2);
//	char *i3 = ft_strjoin(NULL, s2);
//	char *i4 = ft_strjoin(s1, NULL);
//	char *i5 = ft_strjoin(NULL, NULL);
//	printf("%s\n", i1);
//	printf("%s\n", i2);
//	printf("%s\n", i3);
//	printf("%s\n", i4);
//	printf("%s\n", i5);

//ft_strmapi!
//char f(unsigned int a, char c)
//{
//	if(a >= 0)
//		return(c);
//	else
//		return ((int)c + 1);
//}
//	const char *s1 = "hello";
//	char *result;
//	result = ft_strmapi (s1, f);
//	printf("%s\n", result);

//ft_stritri!
	//ft_striteri("Hello", f);


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



	//printf("%s", ft_strdup("hello"));


//ft_putchar_fd!
	//int fd;
	//fd = open("memo.txt", O_WRONLY);
	//ft_putchar_fd('Q', fd);
	//close(fd);

//ft_putstr_fd
	//int fd;
	//fd = open("memo.txt", O_WRONLY);
	//ft_putstr_fd("hello", fd);

	return(0);
}



	//printf("%lu\n", ft_word_count("", 32));
	//printf("%lu\n", ft_word_count("   what      how      why", 32));
	//printf("%lu\n", ft_word_count("what      how      why   ", 32));
	//printf("%lu\n", ft_word_count("   what      how      why      ", 32));

	//print char **
	//char ** str_arr;
	//str_arr = (char **)malloc(sizeof(char*) * 4);
	//str_arr[0] = (char*)malloc(sizeof(char) + 6);
	//str_arr[1] = (char*)malloc(sizeof(char) + 6);

	//int i;
	//i = 0;

	//strcpy(str_arr[0], "Hello");
	//strcpy(str_arr[1], "world");

	//while (i < 2)
	//{
	//	printf("%s\n", str_arr[i]);
	//	i++;
	//}
