/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:32:12 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 09:40:05 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr(const char*s, int c)
{
	int	i;
	char *last;

	last = (char*)s;
	if(ft_strlen((char*)s) == 0)
		return(0);
	i = ft_strlen(last) - 1;
	while (s[i] != c && i >= 0 && s[i] != '\0')
	{
		i--;
	}
	if(s[i] == c)
		last = last + i;
	return(last);
}
