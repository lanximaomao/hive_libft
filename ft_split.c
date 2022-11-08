/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:12:40 by lsun              #+#    #+#             */
/*   Updated: 2022/11/08 17:32:22 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_word_count (const char *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	if(s[0] != c && s[0] != '\0')
		count = count + 1;
	return(count);
}

size_t ft_word_len(const char *s, char c, size_t *i)
{
	size_t	word_len;
	char *s1;

	s1 = (char*)s + (*i);
	word_len = 0;

	// printf("\n %s, %c, %lu \n", s1, c, *i);
	// printf("test");
	// printf("%c\n", *s1);

	while (*s1 == c)
	{
		s1++;
		(*i)++;
	}
	while (*s1 != c && *s1 != '\0')
	{
		word_len++;
		s1++;
	}
	// printf("test %lu\n", word_len);
	return(word_len);
}

size_t ft_assign(const char *s, char** str_arr, int count, char c, size_t i_come)
{
	size_t 	i_go;
	size_t	word_len;

	i_go = 0;
	word_len = ft_word_len(s, c, &i_come);

	// printf("\n%lu\n", word_len);

	str_arr[count] = (char *)malloc(sizeof(char)*(word_len + 1));
	if(!str_arr[count])
		return (0);
	while (i_go < word_len)
	{
		str_arr[count][i_go] = s[i_come + i_go];
		// printf("%c\n", str_arr[count][i_go]);
		i_go++;

	}
	str_arr[count][i_go] = '\0';

	// printf("%s\n", str_arr[count]);
	return (i_go + i_come);
}

char **ft_split(char const *s, char c)
{
	char **str_arr;
	size_t	count;
	size_t	count_start;
	size_t	i;

	if (!s || !*s)
		return(0);
	// printf("%c", c);
	// printf("%s", s);
	count = ft_word_count(s, c);
	count_start = 0;
	// printf("\n%lu\n", count);
	str_arr = (char**)malloc(sizeof(char*)*(count + 1));
	if (!str_arr)
		return(0);
	// // str_arr[count] = '\0';
	i = 0;
	while (count_start < count)
	{
		i = ft_assign(s, str_arr,count_start, c, i);
		count_start++;
		// printf("%lu", count_start);
	}
	// printf("%s\n", str_arr[0]);
	return(str_arr);
}

int main()
{
	int i;
	i = 0;
	char **str_arr;
	char s[] = "  he  llo wordld  ";
	str_arr = ft_split(s, ' ');
	// printf("%s", *str_arr);
	while (i < 3)
	{
		printf("%s\n", str_arr[i]);
		i++;
	}
	return(0);
}
