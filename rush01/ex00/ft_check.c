/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epasquie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:01:34 by epasquie          #+#    #+#             */
/*   Updated: 2022/09/25 11:01:35 by epasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	*ft_checkdoublon(int *val)
{
	int	i;
	int	j;
    int tmp;

	i = 0;
    tmp = 0;
	while (i < 3)
	{
        j = i + 1;
		while (j < 4)
		{
			if (val[i] == val[j])
			{
                tmp = i;
				val[i] = 5;
				val[j] = 5;
            }
            else if (val[j] ==  tmp)
            {
                val[j] = 5;
            }
            j++;
		}
        i++;
	}
	return(val);
}

int **ft_compare_board(int **tab_final, int **tab)
{
  int line;
  int col;
   
  line = 0;
  while (line < 4)
  {
    col = 0;
    while (col < 4)
    {
      if (tab_final[line][col] == 0 && tab[line][col] > 0)
      {
        tab_final[line][col] = tab[line][col];
      }
      else if (tab_final[line][col] != tab[line][col] && tab[line][col] > 0)
      {
            tab_final[line][col] = 0;
      }
      
      col++;
    }
    line ++;
  }
  return(tab_final);
}

int **ft_fill_line(int  **tab)
{
    int line;
    int col;
    int tmp;

    tmp = 0;
    line = -1;
    while (++line <= 3)
	{
        col = 0;
		while (++col <= 3)
		{
            if (tab[line][col] != 0)
            {
                tmp += tab[line][col];
            }
		}
	}
    return(0);
}