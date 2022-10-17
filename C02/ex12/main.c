void	*ft_print_memory(void *addr, unsigned int size);

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	string[] = "Bonjour les aminches comment ca va\n hello you jaime les patates, lescalade et largent!\n";
	int		size;

	size = ft_strlen(string);
	ft_print_memory(string, size);
	return (0);
}
