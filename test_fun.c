
#include "libft.h"

//int main()
//{
//	char s1[] = "hello";
//	printf("%lu", sizeof(s1));
//}


//int main()
//{
//	char **s1;
//	s1 = (char**)malloc(sizeof(char*)*6);
//	printf("%lu", sizeof(s1)/sizeof(s1[0]));
//}


int main()
{
	char **s1 = {"hello", "world"};
	printf("%lu", sizeof(s1)/sizeof(s1[0]));
}


//int main()
//{
//	char *s1;
//	s1 = (char*)malloc(sizeof(char)*6);
//	printf("%lu", sizeof(s1)/sizeof(s1[0]));
//}
