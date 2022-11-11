#include "libft.a"

int ft_lstsize(t_list *lst)
{
	int	i;
	t_size	temp;

	temp = lst;
	while (temp.next && ++i)
		temp = temp.next;
	return(i);
}