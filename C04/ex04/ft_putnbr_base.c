/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:03:33 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/23 10:54:29 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	temp;
	int	base_len;

	if (ft_check_base(base) == 1)
	{
		base_len = ft_strlen(base);
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(nbr * -1, base);
		}
		else if (nbr > base_len - 1)
		{
			ft_putnbr_base(nbr / base_len, base);
			temp = nbr % base_len;
			ft_putchar(base[temp]);
		}
		else if (nbr >= 0)
		{
			temp = nbr % base_len;
			ft_putchar(base[temp]);
		}
	}
}
