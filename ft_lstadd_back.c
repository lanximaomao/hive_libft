#include "libft.h"

/* add to the new at the end of the lst */

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list temp;

	temp = lst;
	while (temp.next)
	{
		temp = temp.next;
	}
	temp.next = new;
}