/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:41 by lsun              #+#    #+#             */
/*   Updated: 2022/10/30 10:42:26 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset (void *b, int c, size_t len)
{
	size_t	i;
	char	*new_b;

	i = 0;
	new_b = (char *)b;
	while (i < len)
		new_b[i++] = c;;
	return(b);
}

int	main(void)
{
	char str1[50];

	strcpy(str1, "aaaaaaaaaa");
	puts(str1);

	memset(str1, 90, 3);
	puts(str1);

	ft_memset(str1, 90, 3);
	puts(str1);

	return(0);
}
