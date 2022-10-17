/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:01:29 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/25 15:06:52 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_place_4_top(int **tab, int *value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (value[i] == 1)
			tab[0][i] = 4;
		else if (value[i] == 4)
		{
			tab[0][i] = 1;
			tab[1][i] = 2;
			tab[2][i] = 3;
			tab[3][i] = 4;
		}
		i++;
	}
	return (tab);
}

int	**ft_place_4_down(int **tab, int *value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (value[i] == 1)
			tab[3][i] = 4;
		else if (value[i] == 4)
		{
			tab[3][i] = 1;
			tab[2][i] = 2;
			tab[1][i] = 3;
			tab[0][i] = 4;
		}
		i++;
	}
	return (tab);
}

int	**ft_place_4_left(int **tab, int *value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (value[i] == 1)
			tab[i][0] = 4;
		else if (value[i] == 4)
		{
			tab[i][0] = 1;
			tab[i][1] = 2;
			tab[i][2] = 3;
			tab[i][3] = 4;
		}
		i++;
	}
	return (tab);
}

int	**ft_place_4_right(int **tab, int *value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (value[i] == 1)
			tab[i][3] = 4;
		else if (value[i] == 4)
		{
			tab[i][3] = 1;
			tab[i][2] = 2;
			tab[i][1] = 3;
			tab[i][0] = 4;
		}
		i++;
	}
	return (tab);
}