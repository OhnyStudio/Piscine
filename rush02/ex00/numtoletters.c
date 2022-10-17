/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numtoletters.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbergero <pascaloubergeron@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:12:48 by pbergero          #+#    #+#             */
/*   Updated: 2022/10/02 17:37:03 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"
#include<stdio.h>

void	atoletters(char **dict, unsigned int nbr);

int	g_printspace = 0;

int	atoidict(char *str)
{
	int	i;
	int	nbr;

	nbr = 0;
	i = 0;
	while (str[i] == 32)
		i++;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	return (nbr);
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
	while (i < len - 1)
	{
	j = 0;
		while (j < len - 1)
		{
			if ((atoidict(dict[j]) > atoidict(dict[j + 1]))
			)
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

void	writeletter(char *words)
{
	int	i;

	i = 0;
	if (g_printspace == 1)
		write(1, " ", 1);
	g_printspace = 1;
	while (words[i] == 32)
		i++;
	while (words[i] >= '0' && words[i] <= '9')
		i++;
	i++;
	while (words[i] == 32)
		i++;
	while (words[i] != '\0')
	{
		write(1, &words[i], 1);
		i++;
	}
}

void	getgoodnum(char **dict, unsigned int nbr,
unsigned int numsyn, unsigned int i )
{
	numsyn = atoidict(dict[i - 1]);
	if (nbr < 21)
	{
		writeletter(dict[nbr]);
		return ;
	}
	if (nbr / numsyn == 1 && 100 / nbr == 0)
	{
		writeletter(dict[1]);
	}
	if (nbr / numsyn != 1)
		atoletters(dict, nbr / numsyn);
	writeletter(dict[i - 1]);
	if (nbr % numsyn != 0)
	{
		atoletters(dict, nbr % numsyn);
	}
}

void	atoletters(char **dict, unsigned int nbr)
{
	unsigned int	i;
	unsigned int	numsyn;

	i = 0;
	numsyn = 0;
	while (nbr > numsyn && dict[++i] && numsyn < 1000000000)
		numsyn = atoidict(dict[i]);
	if (numsyn == nbr)
	{
		writeletter(dict[i]);
		return ;
	}
	getgoodnum(dict, nbr, numsyn, i);
}
