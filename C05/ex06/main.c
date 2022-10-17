#include<stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int i;

	i = 0;
	while (i < 200)
	{
    	printf("%d -> %d \n" , i, ft_is_prime(i));
		i++;
	}
	return (0);
}
