/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard < jsavard@student.42quebec.com >   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:50:31 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/16 09:06:31 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			ft_write_char('-');
			nb *= -1;
			ft_putnbr(nb);
		}
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_write_char(nb % 10 + '0');
	}
	else
	{
		ft_write_char(nb + '0');
	}
}
