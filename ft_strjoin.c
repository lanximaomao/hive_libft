#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*joint_str;
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !s2)
		return(NULL);
	if (!s1)
		return((char*)s2);
	if(!s2)
		return((char*)s1);
	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joint_str = (char*)malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (!joint_str)
		return(NULL);
	while (i < len_s1 + len_s2)
	{
		if (i < len_s1)
			joint_str[i] = s1[i];
		if (i >= len_s1)
		{	joint_str[i] = s2[j];
			j++;
		}
		i++;
	}
	joint_str[len_s1 + len_s2] = '\0';
	return(joint_str);
}

int	main()
{
	char *s1 = "";
	char *s2 = "";
	char *i1 = ft_strjoin(s1, s2);
	char *i2 = ft_strjoin(s1, s2);
	char *i3 = ft_strjoin(NULL, s2);
	char *i4 = ft_strjoin(s1, NULL);
	char *i5 = ft_strjoin(NULL, NULL);
	printf("%s\n", i1);
	printf("%s\n", i2);
	printf("%s\n", i3);
	printf("%s\n", i4);
	printf("%s\n", i5);
	return(0);
}