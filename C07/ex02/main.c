#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *tab;
	int **range;
	int lenght;
	int i;

	range = &tab;
	
	i = 0;
	lenght = ft_ultimate_range(range, -210000000, 2100000000);
	printf("%d lenght \n", lenght);
	while (i < lenght)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
