#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	unsigned int	nb = 5;
	char 			str[14] = "test";
	char			str2[] = "test Bob";
	char			str3[14] = "test";

	printf("%s \n", ft_strncat(str, str2, nb));
	printf("%s", strncat(str3, str2, nb));
}
