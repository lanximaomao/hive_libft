
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list temp;
	t_list new_node;
	
	temp = lst;
	while (temp.next)
	{
		new_node = ft_lstnew(f(temp));
		if(!new_node)
			del(new_node);
		temp.next = temp;
	}
}