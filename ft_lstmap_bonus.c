/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:16:04 by linlinsun         #+#    #+#             */
/*   Updated: 2022/11/11 15:54:21 by linlinsun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		check;
	t_list	*m;
	t_list	*n;

	check = -1;
	if (lst && lst->next)
		ft_lstmap(lst->next, f, del);
	if (check < 0)
	{
		m = ft_lstnew(f(lst));
		m->next = NULL;
		check = 1;
	}
	else
	{
		n = ft_lstnew(f(lst));
		n->next = m;
	}
	return (n);
}
