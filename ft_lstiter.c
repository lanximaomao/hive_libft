#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	temp;

	temp = lst;
	while (temp.next)
	{
		f(temp);
		temp = temp.next;
	}
}