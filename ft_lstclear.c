#include "libft.h"

/* add to the front */

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	temp;

	temp = *lst;
	while (temp.next)
	{
		temp = temp.next;
		del(temp);
		
	}
	lst.next = NULL;
}