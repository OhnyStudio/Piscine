/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:19:32 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/22 13:32:09 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr_hexa(unsigned int nb)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_hexa(nb * -1);
	}
	else if (nb > 16)
	{
		ft_putnbr_hexa(nb / 16);
		write(1, &hexa[nb % 16], 1);
	}
	else if (nb >= 16)
		write(1, &hexa[nb % 16], 1);
}

void	ft_print_addr(unsigned char *str)
{
	int				i;
	unsigned long	nb;

	i = 0;
	nb = (unsigned long)str;
	while (i < 7)
	{
		write(1, "0", 1);
		if (i == 5)
			write(1, "1", 1);
		i++;
	}
	ft_putnbr_hexa(nb);
	write(1, ": ", 2);
}

void	ft_print_hexa(unsigned char *str, int start)
{
	int		i;
	int		finish;
	char	*hexa;

	i = start;
	hexa = "0123456789abcdef";
	finish = 0;
	while (i < start + 16)
	{
		if (str[i] != '\0' && finish == 0)
		{
			write(1, &hexa[str[i] / 16], 1);
			write(1, &hexa[str[i] % 16], 1);
		}
		else
		{
			finish = 1;
			write(1, "  ", 2);
		}
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_str(unsigned char *str, int start)
{
	int	i;
	int	finish;

	i = start;
	finish = 0;
	while (i < start + 16)
	{
		if (str[i] != '\0' && finish == 0)
		{
			if (str[i] < 32 || str[i] > 126)
				write(1, ".", 1);
			else
				write(1, &str[i], 1);
		}
		else
		{
			finish = 1;
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	while (i < size / 2)
	{
		ft_print_addr((unsigned char *)addr);
		ptr = &addr[i];
		ft_print_hexa(ptr, i);
		ft_print_str(ptr, i);
		write(1, "\n", 1);
		i += 8;
	}	
	return (addr);
}
