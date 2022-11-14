/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:16:04 by linlinsun         #+#    #+#             */
/*   Updated: 2022/11/14 21:44:28 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_lst;
	t_list	*new_node;

	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_lst)
			del(new_lst->content);
		new_lst = ft_isadd_back(new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
