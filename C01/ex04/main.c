void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 10;
	d = 3;
	a = &c;
	b = &d;

	ft_ultimate_div_mod(a, b);
	return (0);
}
