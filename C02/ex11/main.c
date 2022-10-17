void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	a[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(a);
	return (0);
}
