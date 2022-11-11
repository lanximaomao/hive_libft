#include "libft.h"

/* delete the content */

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	temp;

	temp = lst;
	temp.content = NULL;
	free(temp.content);
}