#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	str1[25] = "Hello ";
	char	str2[] = "0123456789";
	char	str3[25] = "Hello ";
	printf("%s \n", strcat(str1, str2));
	printf("%s", ft_strcat(str3, str2));
	return (0);
}
