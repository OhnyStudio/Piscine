/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard < jsavard@student.42quebec.com >   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:10:40 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/16 10:20:23 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_write_char(nb % 10 + '0');
	}
	else
	{
		ft_write_char(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int	nb[2];

	nb[0] = 0;
	while (nb[0] < 99)
	{
		nb[1] = nb[0] + 1;
		while (nb[1] <= 99)
		{
			if (nb[0] < 10)
				ft_write_char('0');
			ft_putnbr(nb[0]);
			ft_write_char(' ');
			if (nb[1] < 10)
				ft_write_char('0');
			ft_putnbr(nb[1]);
			nb[1]++;
			if (nb[0] < 98 || nb[1] < 99)
				write(1, ", ", 2);
		}
		nb[0]++;
	}
}
