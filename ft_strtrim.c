/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:14:55 by lsun              #+#    #+#             */
/*   Updated: 2022/11/10 17:13:33 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		check;
	int		start;
	int		end;
	char	*strim;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	check = -1;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) && check < 0)
			start++;
		if (!(ft_strchr(set, s1[i])) && check < 0)
			check = 1;
		if (ft_strchr(set, s1[end]) && check > 0)
			end--;
		i++;
	}
	strim = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!strim)
		return (NULL);
	i = 0;
	while (start <= end)
		strim[i++] = s1[start++];
	strim[i] = '\0';
	return (strim);
}
