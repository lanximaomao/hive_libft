/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:47 by lsun              #+#    #+#             */
/*   Updated: 2022/11/16 13:11:10 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_num(int n)
{
	int	digit;

	digit = 1;
	if (n < 0)
	{
		digit++;
		n = n * (-1);
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int			digit;
	char		*str;

	digit = ft_digit_num(n);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	str[digit] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	while (n >= 10 && digit > 0)
	{
		str[digit - 1] = ln % 10 + 48;
		n = n / 10;
		digit--;
	}
	if (n < 10)
		str[digit - 1] = n % 10 + 48;
	return (str);
}
