#include "libft.h"

int ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		c = c - 32;
	return(c);
}

int ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		c = c + 32;
	return(c);	
}

int main()
{
	printf("%d\n", ft_tolower(6));
	printf("%d\n", tolower(6));
	return(0);
}