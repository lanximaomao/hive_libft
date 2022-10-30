#include "libft.h"

int ft_strlen(const char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char * ft_strchr(const char*s, int c)
{
	int	i;
	char *first;

	i = 0;
	first = s; //?
	while (s[i] != c)
	{
		i++;
	}
	if(s[i] == c)
		first = s+i; //?
	return(first);
}

char * ft_strrchr(const char*s, int c)
{	
	int	i;
	char *last;

	i = ft_strlen(s);
	// last = s + ft_strlen(s); //?
	while (s[i-1] != c && i > 0)
	{
		i--;
	}
	if(s[i] == c)
		last = s+ft_strlen(s)-i; //?
	return(last);
}

int main()
{	
	printf("%s\n", strchr("bbbaccc", 97));
	printf("%s\n", ft_strchr("bbbaccc", 97));
	printf("%s\n", strrchr("bbbabbbbbabbbc", 97));
	printf("%s\n", ft_strrchr("bbbabbbbbabbbc", 97));
	return(0);
}