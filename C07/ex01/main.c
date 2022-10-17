#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *range;
	int i;

	range = ft_range(10000000, 10);
	i = 0;
	if (range)
	{
	while (i < 20)
	{
		printf("%d \n", range[i]);
		i++;
	}
	}
	return (0);
	free(range);
}
