/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epasquie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:48:13 by epasquie          #+#    #+#             */
/*   Updated: 2022/09/24 18:48:14 by epasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int **ft_parse_tabLeft(int *str,int **tab)
{
    int line;
    int col;
	int compt;
	int	j;

    line = -1;
    col = 0;
	compt = 0;
	j = 0;
    while (++line <= 3)
	{
		tab[line][col] = 5 - str[line];
		while (++col <= 3)
		{
			tab[line][col] = tab[line][col-1] +1;
			if(tab[line][col] > 4 || str[line] == 5)
			{
				tab[line][col] = 0;
				while(++col <= 3)
					tab[line][col] = 0;
			}
		}
		col = 0;
	}
	return(tab);
}

int **ft_parse_tabTop(int *str,int **tab)
{
    int line;
    int col;
	int compt;
	int	j;

    line = 0;
    col = -1;
	compt = 0;
	j = 0;
    while (++col <= 3)
	{
		tab[line][col] = 5 - str[col];
		while (++line <= 3)
		{
			tab[line][col] = tab[line-1][col] + 1;
			if (tab[line][col] > 4 || str[col] == 5)
			{
				tab[line][col] = 0;
				while(++line <= 3)
					tab[line][col] = 0;
			}
		}
		line = 0;
	}
	return(tab);
}

int **ft_parse_tabBot(int *str,int **tab)
{
    int line;
    int col;
	int compt;
	int	j;

    line = 3;
    col = -1;
	compt = 0;
	j = 0;
    while (++col <= 3)
	{
		tab[line][col] = 5 - str[col];
		while (--line >= 0)
		{
			tab[line][col] = tab[line+1][col] + 1;
			if (tab[line][col] > 4 || str[col] == 5)
			{
				tab[line][col] = 0;
				while(--line >= 0)
					tab[line][col] = 0;
			}
		}
		line = 3;
	}
	return(tab);
}

int **ft_parse_tabRight(int *str,int **tab)
{
    int line;
    int col;
	int compt;
	int	j;

    line = -1;
    col = 3;
	compt = 0;
	j = 0;
    while (++line <= 3)
	{
		tab[line][col] = 5 - str[line];
		while (--col >= 0)
		{
			tab[line][col] = tab[line][col+1] +1;
			if(tab[line][col] > 4 || str[line] == 5)
			{
				tab[line][col] = 0;
				while(--col >= 0)
					tab[line][col] = 0;
			}
		}
		col = 3;
	}
	return(tab);
}