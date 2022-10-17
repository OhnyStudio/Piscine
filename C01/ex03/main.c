void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;
	
	a = 10;
	b = 3;
	c = 0;
	d = 0;
	div = &c;
	mod = &d;

	ft_div_mod(a, b, div, mod);
	return (0);
}
