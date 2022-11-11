/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:15:57 by linlinsun         #+#    #+#             */
/*   Updated: 2022/11/11 13:57:05 by linlinsun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* delete the content */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	temp = lst;
	del(temp);
	free(temp);
}
