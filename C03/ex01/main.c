#include<stdio.h>
#include<string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char str[] = "abcdefghijklnbtgrhtr";
	char cmp[] = "abcdef";

	char str2[] = "abcdef";
	char cmp2[] = "abcdefghijklnbtgrhtr";

	char str3[] = "z";
	char cmp3[] = "d";

	char str4[] = "abc";
	char cmp4[] = "abe";

	printf("strncmp:\n");
	printf("%d\n", strncmp(str, cmp, 6));
	printf("%d\n", strncmp(str, cmp, 7));
	printf("%d\n", strncmp(str, cmp, 8));

	printf("%d\n", strncmp(str2, cmp2, 6));
	printf("%d\n", strncmp(str2, cmp2, 7));
	printf("%d\n", strncmp(str2, cmp2, 8));

	printf("%d\n",strncmp(str3, cmp3, 1));
	printf("%d\n",strncmp(str4, cmp4, 3));
	printf("%d\n",strncmp("apples", "apple", 5));

	printf("ft_strncmp:\n");
	printf("%d\n", ft_strncmp(str, cmp, 6));
	printf("%d\n", ft_strncmp(str, cmp, 7));
	printf("%d\n", ft_strncmp(str, cmp, 8));

	printf("%d\n", ft_strncmp(str2, cmp2, 6));
	printf("%d\n", ft_strncmp(str2, cmp2, 7));
	printf("%d\n", ft_strncmp(str2, cmp2, 8));

	printf("%d\n",ft_strncmp(str3, cmp3, 1));
	printf("%d\n",ft_strncmp(str4, cmp4, 3));
	printf("%d\n",ft_strncmp("apples", "apple", 5));
	return (0);
}
