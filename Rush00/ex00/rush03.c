/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:38:47 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/17 10:50:27 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include"ft_putchar.c"

void	ft_putchar(char c);

void	ft_put_top_or_bottom_row(int max_x)
{
	int	x_pos;

	x_pos = 2;
	ft_putchar('A');
	while (x_pos < max_x)
	{
		ft_putchar('B');
		x_pos++;
	}
	if (max_x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_put_middle_row_character(int max_x)
{
	int	x_pos;

	x_pos = 2;
	ft_putchar('B');
	while (x_pos < max_x)
	{
		ft_putchar(' ');
		x_pos++;
	}
	if (max_x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	ft_put_middle_rows_characters(int max_x, int max_y)
{
	int	y_pos;

	y_pos = 2;
	while (y_pos < max_y)
	{
		ft_put_middle_row_character(max_x);
		y_pos++;
	}
}

void	rush(int max_x, int max_y)
{
	if (max_x > 0 && max_y > 0)
	{
		ft_put_top_or_bottom_row(max_x);
		ft_put_middle_rows_characters(max_x, max_y);
		if (max_y > 1)
			ft_put_top_or_bottom_row(max_x);
	}
}
