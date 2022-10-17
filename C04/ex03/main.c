#include<stdio.h>

int	ft_atoi(char *str);

int	main()
{
	char	str[] = "\n---+++--1234567ab2323";
	printf("%d", ft_atoi(str));
	return (0);
}
