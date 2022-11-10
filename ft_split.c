/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:12:40 by lsun              #+#    #+#             */
/*   Updated: 2022/11/10 19:07:53 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size_t	ft_word_count(const char *s, char c)
//{
//	size_t	i;
//	size_t	count;

//	count = 0;
//	i = 0;
//	while (s[i] != '\0')
//	{
//		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
//			count++;
//		i++;
//	}
//	if (s[0] != c && s[0] != '\0')
//		count = count + 1;
//	return (count);
//}

//size_t	ft_word_len(const char *s, char c, size_t *i_come)
//{
//	size_t	word_len;
//	char	*s1;

//	s1 = (char *)s + (*i_come);
//	word_len = 0;
//	while (*s1 == c)
//	{
//		s1++;
//		(*i_come)++;
//	}
//	while (*s1 != c && *s1 != '\0')
//	{
//		word_len++;
//		s1++;
//	}
//	return (word_len);
//}

//size_t	ft_assign(const char *s, char **str_arr, int count_start, char c,
//		size_t i_come)
//{
//	size_t	i_go;
//	size_t	word_len;

//	i_go = 0;
//	word_len = ft_word_len(s, c, &i_come);
//	str_arr[count_start] = (char *)malloc(sizeof(char) * (word_len + 1));
//	if (!str_arr[count_start])
//		return (0);
//	while (i_go < word_len)
//	{
//		str_arr[count_start][i_go] = s[i_come + i_go];
//		i_go++;
//	}
//	str_arr[count_start][i_go] = '\0';
//	return (i_go + i_come);
//}

//char	**ft_split(char const *s, char c)
//{
//	char	**str_arr;
//	size_t	count;
//	size_t	count_start;
//	size_t	i;

//	if (!s || !*s)
//	{
//		str_arr = (char **)malloc(sizeof(char *) * 1);
//		str_arr[0] = NULL;
//		return (str_arr);
//	}
//	count = ft_word_count(s, c);
//	count_start = 0;
//	str_arr = (char **)malloc(sizeof(char *) * (count + 1));
//	if (!str_arr)
//		return (0);
//	i = 0;
//	while (count_start < count)
//	{
//		i = ft_assign(s, str_arr, count_start, c, i);
//		count_start++;
//	}
//	str_arr[count] = NULL;
//	return (str_arr);
//}

/* evan's code*/
static size_t	count_token_len(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (count_token_len(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
