#include "libft.h"
// #include <stdio.h>

t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = NULL;
	new_node = malloc (sizeof(t_list));
	new_node.content = content;
	new_node.next = NULL;
	return(new_node);
}

// int main()
// {
// 	t_list *n1;
// 	n1 = ft_lstnew("one");
// 	printf("%s\n", n1.content);
// 	return(0);
// }