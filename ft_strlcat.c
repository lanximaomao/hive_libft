#include <stddef.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

size_t ft_strlcat(char* dst, const char* src, size_t dstsize)
{
    int	i;
	int	j;

	i = ft_strlen(dst);
	j = 0;

	while (dstsize > i && dst == '\0' && src[j] != '\0')
	{
		dst[i++] = src[j++];
	}
	return(ft_strlen(dst) + ft_strlen(src));
}

int main()
{
	char dst1[30] = ""; 
	char dst2[30] = ""; 
    char src[] = "bb";
    printf("%lu\n",strlcat(dst1, src, 20));
    puts(dst1);
	printf("%lu\n",strlcat(dst2, src, 20));
    puts(dst2);
	return(0);
}