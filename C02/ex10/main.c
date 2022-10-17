#include<stdio.h>
#include<unistd.h>
#include<string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char 			src[] = "Hello comment allez vous!";
	char			dest[55] = "test patate!";
	char			dest2[50] = "test patate!";
	unsigned int	a = 17;
	printf("%s \n", dest);
	printf("%u \n", ft_strlcpy(dest, src, a));
	printf("%s \n", dest);
	printf("%lu \n", strlcpy(dest2, src, a));
	printf("%s", dest2);
	return (0);
}
