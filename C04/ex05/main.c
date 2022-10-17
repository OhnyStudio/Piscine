#include<stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*str;
	char	*base;
	
	str = "\n\n ---+--aabeAFB10F1h001001233322233334";
	base = "0123456789abcdef";
	printf("%d", ft_atoi_base(str, base));
	return (0);
}
