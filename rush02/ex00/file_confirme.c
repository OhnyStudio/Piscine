/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_confirme.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboisve <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:16:37 by anboisve          #+#    #+#             */
/*   Updated: 2022/10/02 18:34:00 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

int	ft_non_printable(char c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}

int	ft_check_line(char *str)
{
	int	i;
	int	count[2];

	i = 0;
	count[0] = 0;
	count[1] = 0;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		count[0]++;
		i++;
	}
	if (count[0] > 10)
		ft_txtcopy("2000000000", str);
	while (str[i] == 32 || str[i] == ':')
	{
		if (str[i] == ':')
			count[1]++;
		i++;
	}
	if (count[1] != 1)
		return (0);
	return (1);
}

int	ft_all_line(char **dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_check_line(dict[i]) != 1)
			return (0);
		if (dict[i][0] != '\n' || dict[i][0] != '\0')
		{	
			if (dict[i][0] < '0' || dict[i][0] > '9')
				return (0);
		}
		i++;
	}
	return (1);
}

int	file_confirme(char *f_name)
{
	int		size;
	int		file_p;
	char	input[1];

	file_p = open(f_name, O_RDWR);
	if (file_p == -1)
	{
		return (-1);
	}
	size = 0;
	while (read(file_p, input, 1) > 0)
	{	
		if (input[0] != '\n')
		{
			if (ft_non_printable(input[0]) == 0)
				return (-1);
		}
		else
			size++;
	}
	close(file_p);
	return (size);
}
