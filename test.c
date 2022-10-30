#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	char *new_dst;
	char *new_src;

	i = 0;
	new_dst = (char*)dst;
	new_src = (char*)src;

	new_dst = new_dst + len;
	new_src = new_src + len;

	while (i < len)
	{
		new_dst = new_src;
		new_dst--;
		new_src--;
		i++;
	}
	return(dst);
}

void ft_memmove_test(char **str)
{
	int	i;
	int	j;
	int	k;
	char *dst;
	char *src;
	int	test_total;
	int	test_failed;
	char *dst_cpy1;
	char *dst_cpy2;
	int len;

	dst = (char*)malloc(sizeof(char) * 100);
	src = (char*)malloc(sizeof(char) * 100);

	dst_cpy1 = (char*)malloc(sizeof(char) * 100);
	dst_cpy2 = (char*)malloc(sizeof(char) * 100);
	
	i = 0;
	j = 0;
	k = 0;
	test_total = 0;
	test_failed = 0;
	while(i <= 9)
	{
		src = strcpy(src, str[i]);
		while (j <= 9)
		{
			dst = strcpy(dst, str[j]);
			while (k < 100)
			{
				len = k;
				if( strcmp(ft_memmove(strcpy(dst_cpy1, dst), src, len), memmove(strcpy(dst_cpy2, dst), src, len)))
				// if( strcmp(ft_memmove(dst, src, len), memmove(dst, src, len)))
				{
					test_failed ++;
					printf("test case failed, %s, %s, %d, true %s, my_test %s\n", dst, src, len, memmove(dst, src, len), ft_memmove(dst, src, len));
				}
				k++;
				test_total++;
			}
			dst = strcpy(dst, str[j]); //reset dst string
			j++;
			k = 0;	
		}
		j = 0;
		i++;
	}
	printf("total number of tests are %d\n", test_total);
	printf("total number of failed tests are %d\n", test_failed);
}

int main(void)
{
	char **str;
	char *dst;
	char *src;
	int len;

	str = (char**)malloc((sizeof(char*)));
	while (len < 10) // max number of strings are 10
	{
		str[len] = (char*)malloc(sizeof(char) * 100); //max length of a sub string is 100
		len++;
	}



	len = 0;
	strcpy(str[0], "");
	strcpy(str[1], "a");
	strcpy(str[2], "xy");
	strcpy(str[3], "?ad");
	strcpy(str[4], "23lsj");
	strcpy(str[5], "s;kf;a");
	strcpy(str[6], "???alajflajf");
	strcpy(str[7], "oosljfalfjalfla");
	strcpy(str[8], "****wldkakjflajflaksllakahakakahakaalaaad");
	strcpy(str[9], " sljalhglafl;a;jglajfla;gjlaueihlksmdcllkzjiln;FJL");

	ft_memmove_test(**str);
	return(0);
};


