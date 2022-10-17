/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:50:53 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/03 16:02:48 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == 32
			|| (str[i] >= 9 && str[i] <= 13))
			return (0);
		i++;
	}
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j++])
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_rev(char *str)
{
	char	temp;
	int		str_len;
	int		i;

	i = 0;
	str_len = ft_strlen(str) - 1;
	while (i < str_len)
	{
		temp = str[i];
		str[i] = str[str_len];
		str[str_len] = temp;
		i++;
		str_len--;
	}
}
