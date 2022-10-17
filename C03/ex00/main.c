#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[] = "Testee";
	char	str2[] = "Tesdfkjdft";
	printf("%d \n", ft_strcmp(str1, str2));
	printf("%d", strcmp(str1, str2));
	return (0);
}
