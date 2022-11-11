
#include "libft.h"

/* 
** return the last node of the list
*/

t_list *ft_lstlast(t_list *lst)
{
	t_list temp;

	temp = lst;
	while(temp.next)
		temp = temp.next;
	return(temp);
}
