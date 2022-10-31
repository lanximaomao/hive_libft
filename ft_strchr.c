#include "libft.h"

char * ft_strchr(const char*s, int c)
{
	int	i;
	char *first;

	i = 0;
	first = (char*)s;
	while (s[i] != c  && s[i] != '\0')
	{
		i++;
	}
	if(s[i] == c)
	{
		first = first + i;
		return(first);
	}
	else
		return(0);
}

int main()
{
	printf("%s\n", strchr("abced", 90));
	printf("%s\n", ft_strchr("abced", 90));
	// printf("%s\n", strchr("aabbcdews", 99));
	// printf("%s\n", ft_strchr("aabbcdews", 99));
	// printf("%s\n", strrchr("a*a", 42));
	// printf("%s\n", ft_strrchr("a*a", 42));
	return(0);
}
