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

size_t ft_word_len(const char *s, char c)
{
	size_t	word_len;

	word_len = 0;
	while (*s == c)
		s++;
	while (*s != c)
		word_len++;
	return(word_len);
}

void ft_assign(const char *s, char** str_arr, int count, char c)
{
	size_t 	i;
	size_t	word_len;

	i = 0;
	word_len = ft_word_len(s, c);
	str_arr[count] = (char *)malloc(sizeof(char) + (word_len + 1));
	if(!str_arr[count])
		return;
	while (i < word_len)
	{
		str_arr[count][i] = *s;
		s++;
		i++;
	}
	str_arr[count][i] = '\0';
}

char **ft_split(char const *s, char c)
{
	char **str_arr;
	size_t	count;
	size_t	i;

	if (!s || !*s)
		return(0);
	printf("%c", c);
	printf("%s", s);
	count = ft_word_count(s, c);
	str_arr = (char**)malloc(sizeof(char*)*(count + 1));
	if (!str_arr)
		return(0);
	while (count > 0)
	{
		ft_assign(s, str_arr,count, c);
		count--;
	}
	return(str_arr);
}

int main()
{
	int i;
	i = 0;
	char **str_arr;
	char s[] = "hello world";
	str_arr = ft_split(s, ' ');
	while (i < 2)
	{
		printf("%s\n", str_arr[i]);
		i++;
	}
	return(0);
}
