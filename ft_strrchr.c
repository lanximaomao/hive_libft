#include "libft.h"

int ft_strlen(const char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char * ft_strrchr(const char*s, int c)
{
	int	i;
	char *last;

	last = (char*)s;
	if(ft_strlen(s) == 0)
		return('\0');
	i = ft_strlen(last) - 1;
	while (s[i] != c && i >= 0 && s[i] != '\0')
	{
		i--;
	}
	if(s[i] == c)
		last = last + i;
	return(last);
}
