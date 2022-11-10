/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:14:55 by lsun              #+#    #+#             */
/*   Updated: 2022/11/10 16:12:51 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*strim;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			i++;
		else
			break ;
	}
	start = i;
	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		if (ft_strchr(set, s1[i]))
			i--;
		else
			break ;
	}
	end = i;
	i = 0;
	strim = (char *)malloc(sizeof(char) * (end - start + 1 + 1));
	if (!strim)
		return (NULL);
	while (start <= end)
		strim[i++] = s1[start++];
	strim[i] = '\0';
	return (strim);
}

//int	main(void)
//{
//	char	*strim;
//	strim = ft_strtrim("hello word youoll", "hello word youoll");
//	printf("%s\n", strim);
//	return (0);
//}
