#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	size = 10;
	char			str[20] = "test1234";
	char			str2[] = "Testsdsd";
	char			str3[20] = "test1234";
	
	printf("%s \n", str);
	printf("%u \n", ft_strlcat(str, str2, size));
	printf("%s \n", str);
	printf("%s \n", str3);
	printf("%lu \n", strlcat(str3, str2, size));
	printf("%s \n", str3);
	return (0);
}
