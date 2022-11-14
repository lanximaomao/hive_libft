/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:15:50 by linlinsun         #+#    #+#             */
/*   Updated: 2022/11/14 20:35:11 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* add to the front */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
		new = *lst;
	new->next = *lst;
	new = *lst;
}
