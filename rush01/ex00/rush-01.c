/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epasquie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:02:20 by epasquie          #+#    #+#             */
/*   Updated: 2022/09/25 11:02:22 by epasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_val(int *str)
{
	int	i;

	i = -1;
	while (str[++i] < 4)
		ft_putchar(str[i]+48);
}

int **ft_parse_tabLeft(int *str,int **tab);
int **ft_parse_tabTop(int *str,int **tab);
int **ft_parse_tabRight(int *str,int **tab);
int **ft_parse_tabBot(int *str,int **tab);
int	*ft_checkdoublon(int *val);
int	**ft_compare_board(int **tab_final, int **tab);
int **ft_place_4_top(int **tab, int *value);
int **ft_place_4_down(int **tab, int *value);
int **ft_place_4_left(int **tab, int *value);
int **ft_place_4_right(int **tab, int *value);
int **ft_check_double3_top(int **tab,int *value);
int **ft_check_double3_down(int **tab,int *value);
int **ft_check_double3_left(int **tab,int *value);
int **ft_check_double3_right(int **tab,int *value);

void	ft_print_board(int **tab, int size)
{
	int i;
	int j;
	char temp;  
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			temp = tab[i][j] + 48;
			write(1, &temp, 1);
			if (j < size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main(void)
{
	int	**tab;
	int	**tab_final;
    int	value[16] = {1,2,2,3,3,1,2,2,1,3,2,2,3,2,1,3};
	int	i;


	i = 0;
    tab=(int**)malloc(4*sizeof (int*));
    while (i<4)
    {
	    tab[i]=(int*)malloc(2*sizeof(int));
		i++;
	}
	i = 0;
	tab_final=(int**)malloc(4*sizeof (int*));
    while (i<4)
    {
	    tab_final[i]=(int*)malloc(2*sizeof(int));
		i++;
	}
    ft_place_4_top(tab_final, value);
	ft_place_4_down(tab_final, &value[4]);
	ft_place_4_left(tab_final, &value[8]);
	ft_place_4_right(tab_final, &value[12]);
	ft_check_double3_top(tab_final, value);
	ft_check_double3_down(tab_final, &value[4]);
	ft_check_double3_left(tab_final, &value[8]);
	ft_check_double3_right(tab_final, &value[12]);
    ft_print_board(tab_final, 4);

	free(tab);
	free(tab_final);
}
