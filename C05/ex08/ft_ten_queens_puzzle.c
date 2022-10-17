/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:51:08 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/28 14:32:27 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_queens(char (*board)[10])
{
	int		row;
	int		col;
	char	temp;

	row = 0;
	while (row < 10)
	{
		col = 0;
		while (board[row][col] != 'Q')
		{
			col++;
		}
		temp = col + 48;
		write(1, &temp, 1);
		row++;
	}
	write(1, "\n", 1);
}

int	ft_rowcol(char (*board)[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (board[row][i] == 'Q' || board[i][col] == 'Q')
			return (0);
		i++;
	}
	return (1);
}

int	ft_diag(char (*board)[10], int row, int col)
{
	int	i;
	int	j;

	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 'Q')
			return (0);
		i--;
		j--;
	}
	i = row;
	j = col;
	while (i >= 0 && j < 10)
	{
		if (board[i][j] == 'Q' && i != row && j != col)
			return (0);
		i--;
		j++;
	}
	return (1);
}

int	ft_validation(char (*board)[10], int row, int *i)
{
	int	col;

	col = 0;
	if (row == 10)
	{
		ft_print_queens(board);
		(*i)++;
	}
	while (col < 10)
	{
		if (ft_rowcol(board, row, col) && ft_diag(board, row, col))
		{
			board[row][col] = 'Q';
			ft_validation(board, row + 1, i);
			board[row][col] = 'x';
		}
		col++;
	}
	return (*i);
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10][10];
	int		queens_to_place;
	int		row;
	int		col;

	queens_to_place = 10;
	row = 0;
	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			board[row][col] = 'x';
			col++;
		}
		row++;
	}
	col = 0;
	ft_validation(board, 0, &col);
	return (col);
}
