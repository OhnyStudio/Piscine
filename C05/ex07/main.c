#include<stdio.h>
#include<time.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int i;
	int start = clock();

	i = 2147483620;

		printf("%d \n", ft_find_next_prime(i));
	int stop = clock();
	printf("%d\n", start);
	printf("%d\n", stop);
	return (0);
}
