void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	*hexa;
	char	*octa;
	char	*bin;
	char	*dec;
	int		i;
	
	i = -42;
	hexa = "0123456789ABCDEF";
	octa = "poneyvif";
	bin = "01";
	dec = "0123456789";
	ft_putnbr_base(i, bin);
	return (0);
}
