# include "libft.h"

/* return a substring starting at 'start' index with max lenghth of len*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t sub_len;
	size_t	i;
	char *substr;

	if(!s)
		return(NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return(NULL);
	if (len <= s_len - start)
		sub_len = len;
	else
		sub_len = s_len - start;
	substr = (char*)malloc(sub_len*sizeof(char) + 1);
	if(!substr)
		return(NULL);
	while (sub_len > 0 && i < sub_len )
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[sub_len] = '\0';
	return(substr);
}

// int main()
// {
 	//char *s1 = "ABCDEFG";
    // char *i1 = ft_substr("tripouille", 100, 1); //len is smaller then strlen of s
 	//char *i2 = ft_substr(s1, 2, 10); //len is bigger then strlen of s
 	//char *i3 = ft_substr(s1, 2, 0); //len is 0
 	//char *i4 = ft_substr(NULL, 2, 0); //s is null
 	//char *i5 = ft_substr("\0", 2, 0); //s is empty

 	//puts(i1);
 	//puts(i2);
 	//puts(i3);
 	//puts(i4);
 	//puts(i5);
 	//return(0);
// }
