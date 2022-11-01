/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:41 by lsun              #+#    #+#             */
/*   Updated: 2022/11/01 13:56:10 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*fill a byte string with a byte value*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*new_b;

	i = 0;
	new_b = (char *)b;
	while (i < len)
		new_b[i++] = c;
	return (b);
}
