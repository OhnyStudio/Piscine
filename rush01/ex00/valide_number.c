/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valide_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:01:20 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/25 17:34:20 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_validate_top(int **tab, int top_value, int col)
{
	int line;
	int height;
	int count;
	
	line = 0;
	height = 0;
	count = 0;
	while (line < 4)
	{
		if(tab[line][col] > height)
		{
			height = tab[line][col];
			count++;
		}
		line++;
	}
	if (count > top_value)
	{
		return (0);
	}
	return (1);
}

int ft_validate_down(int **tab, int down_value, int col)
{
	int line;
	int height;
	int count;

	line = 3;
	height = 0;
	count = 0;
	while (line > -1)
	{
		if(tab[line][col] > height)
		{
			height = tab[line][col];
			count++;
		}
		line--;
	}
	if (count > down_value)
	{
		return (0);
	}
	return (1)
}

int ft_validate_left(int **tab, int left_value, int line)
{
	int col;
	int height;
	int count;

	col = 0;
	height = 0;
	count = 0;
	while (col < 4)
	{
		if(tab[line][col] > height)
		{
			height = tab[line][col];
			count++;
		}
		col++;
	}
	if (count > left_value)
	{
		return (0);
	}
	return (1)
}

int ft_validate_right(int **tab, int right_value, int line)
{
    int col;
	int height;
	int count;

	col = 3;
	height = 0;
	count = 0;
	while (col > -1)
	{
		if(tab[line][col] > height)
		{
			height = tab[line][col];
			count++;
		}
		col--;
	}
	if (count > left_value)
	{
		return (0);
	}
	return (1)
}

int	ft_validate(int **tab, *value, int line, int col)
{
	int i;

	if(ft_validate_top(tab, &value[col], col) == 1)
    {
        if(ft_validate_down(tab, &value[col + 4], col) == 1)
        {
            if(ft_validate_left(tab, &value[line + 8], line) == 1)
            {
                if(ft_validate_right(tab, &value[line + 12], line) == 1)
                {
                    return (1);
                }
            }
        }
    }
    return (0);
}
