void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	int *ptra;
	int *ptrb;

	a = 10;
	b = 20;
	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);
	return (0);
}
