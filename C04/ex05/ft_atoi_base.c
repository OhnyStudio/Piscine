/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:00:15 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/26 08:44:37 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_validate_special_char(char c)
{
	if (c == '-' || c == '+' || c == 32 || (c >= 9 && c <= 13))
		return (0);
	else
		return (1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (ft_validate_special_char(base[i]) == 0)
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_convert_nbr(char *str, char *base, int start, int nbr)
{
	int	i;
	int	count;

	i = start;
	while (str[i] != '\0')
	{
		count = 0;
		while (base[count] != '\0')
		{
			if (str[i] == base[count])
			{
				nbr = nbr * ft_strlen(base) + count;
				break ;
			}
			count++;
		}
		if (count == ft_strlen(base))
			break ;
		i++;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	signe;
	int	i;

	i = 0;
	nbr = 0;
	signe = 1;
	if (ft_check_base(base) == 1)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signe *= -1;
			i++;
		}
		nbr = ft_convert_nbr(str, base, i, nbr);
	}
	return (nbr * signe);
}
