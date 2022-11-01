/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:53:21 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 09:33:49 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*new_s;

	i = 0;
	new_s = (char *)s;
	while (i < n)
	{
		new_s[i] = '0';
		i++;
	}
	return(s);
}
