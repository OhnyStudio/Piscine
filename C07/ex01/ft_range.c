/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:46:05 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/30 10:02:47 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	range = (int *) malloc(sizeof(int) * (max - min));
	i = min;
	j = 0;
	while (i < max)
	{
		range[j] = i;
		j++;
		i++;
	}
	return (range);
}
