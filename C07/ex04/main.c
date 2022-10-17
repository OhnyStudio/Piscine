#include<stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *nbr = "\n -+-++--01010101010101214748abc1zzz";
	char *base_from = "01";
	char *base_to = "0123456789abcdef";
	
	printf("%s", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
