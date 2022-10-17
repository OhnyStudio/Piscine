#include<stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	str[1000001];
	int 	i;
	int 	max;

	i = 0;
	max = 1000000;
	while (i < max)
	{
		str[i] = 'x';
		i++;
	}
	str[i] = '\0';
	printf("%s", ft_strdup(str));
	return (0);
}
