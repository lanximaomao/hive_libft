#include "libft.h"

size_t ft_strlcat(char* dst, const char* src, size_t dstsize)
{
    size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	j = 0;
	k = ft_strlen(dst);

	if (dstsize <= i + 1)
		return(ft_strlen((char*)(src)) + dstsize);

	while (dstsize > i + 1 && src[j] != '\0')
	{
		dst[i++] = src[j++];
	}
	return(k + ft_strlen((char*)(src)));
}

//int main()
//{
//	char dst1[100] = "aaaaaaaaaaa";
//	char dst2[100] = "aaaaaaaaaaa";
//    char src[] = "he!";
//    printf("%lu\n",strlcat(dst1, src, 1));
//    puts(dst1);
//	printf("%lu\n",ft_strlcat(dst2, src, 1));
//    puts(dst2);
//	return(0);
//}
