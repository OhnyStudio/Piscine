#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Hello this is a test fddfdfdf";
	char	to_find[] = "test";
	char	str3[] = "Hello this is a test dffdfdf";
	printf("%s \n", ft_strstr(str, to_find));
	printf("%s", strstr(str3, to_find));
	return (0);
}
