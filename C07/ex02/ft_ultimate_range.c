/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:40:29 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/29 11:38:29 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	lenght;
	int	i;

	if (min >= max)
		tab = NULL;
	else
	{
		lenght = max - min;
		tab = (int *)malloc(sizeof(int) * (lenght));
		if (tab == NULL)
			return (-1);
		i = 0;
		while (min != max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		*range = tab;
		return (lenght);
	}
	return (0);
}
