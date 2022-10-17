/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:08:34 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/22 09:30:40 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				temp;
	char			*hexa;
	unsigned char	c;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c < 32 || c > 126)
		{
			ft_putchar('\\');
			temp = c / 16;
			ft_putchar(hexa[temp]);
			temp = c % 16;
			ft_putchar(hexa[temp]);
		}
		else
		{
			ft_putchar(c);
		}
		i++;
	}
}
