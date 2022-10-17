/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbergero <pascaloubergeron@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:25:21 by pbergero          #+#    #+#             */
/*   Updated: 2022/10/02 18:27:12 by pbergero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

int	isgoodnumber(int nbr)
{
	printf("\n %u", nbr);
	if (nbr <= 20)
		return (1);
	while (nbr >= 10)
	{
		if (nbr % 10 != 0)
			return (0);
		nbr = nbr / 10;
	}
	return (1);
}

void	sortnewline(char **dict, int len)
{
	int		j;
	int		i;
	char	*buffer;

	i = 0;
	while (i < len)
	{
	j = 0;
		while (j < len - 1)
		{
			if (isgoodnumber(atoidict(dict[j])) == 0)
			{
				buffer = dict[j];
				dict[j] = dict[j + 1];
				dict[j + 1] = buffer;
			}	
			j++;
		}
		i++;
	}
}

void	sortdict(char **dict)
{
	int		len;
	int		j;
	int		i;
	char	*buffer;

	len = 0;
	i = 0;
	while (dict[len])
		len++;
	while (i < len)
	{
	j = 0;
		while (j < len - 1)
		{
			if (atoidict(dict[j]) > atoidict(dict[j + 1]))
			{
				buffer = dict[j];
				dict[j] = dict[j + 1];
				dict[j + 1] = buffer;
			}
			j++;
		}
		i++;
	}
	sortnewline(dict, len);
}
