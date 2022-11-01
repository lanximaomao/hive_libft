/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:32:49 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 13:56:45 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*first;

	i = 0;
	first = (char *)s;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == c)
	{
		first = first + i;
		return (first);
	}
	else
		return (0);
}
