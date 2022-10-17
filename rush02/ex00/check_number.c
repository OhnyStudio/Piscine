/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbergero <pascaloubergeron@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:32:48 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/02 14:48:34 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

long	ft_check_max_int(char *str)
{
	long	nb;
	int		i;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (nb > 4294967295)
	{
		return (-1);
	}
	return (nb);
}

long	ft_check_is_number(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (-1);
		}
		i++;
	}
	if (ft_strlen(str) > 10)
		return (-1);
	else
		return (ft_check_max_int(str));
}
