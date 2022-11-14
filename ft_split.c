/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:12:40 by lsun              #+#    #+#             */
/*   Updated: 2022/11/14 12:59:00 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
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
	if (s[0] != c && s[0] != '\0')
		count = count + 1;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	str_arr = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!str_arr)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s != c && *s && ++len)
				s++;
			str_arr[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	str_arr[i] = 0;
	return (str_arr);
}
