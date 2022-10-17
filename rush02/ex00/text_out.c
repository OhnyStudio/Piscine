/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_out.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboisve <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:46:14 by anboisve          #+#    #+#             */
/*   Updated: 2022/10/02 15:02:56 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_add_char(char *tab, char in)
{
	int	i;

	i = 0;
	if (in != 32)
	{
		while (tab[i])
			i++;
		tab[i] = in;
		tab[i + 1] = '\0';
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_txtcopy(char *in, char *out)
{
	int	i;

	i = ft_strlen(in);
	while (i >= 0)
	{
		out[i] = in[i];
		i--;
	}
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
