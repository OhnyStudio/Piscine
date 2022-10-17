/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:11:44 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/03 16:04:48 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

unsigned int	ft_strlen(char *str);
int				ft_check_base(char *str);
void			ft_rev(char *str);

unsigned int	ft_to_deci(char *nbr, char *base_from, int start)
{
	int				i;
	unsigned int	count;
	unsigned int	nb_int;

	i = start;
	nb_int = 0;
	while (nbr[i])
	{
		count = 0;
		while (base_from[count])
		{
			if (nbr[i] == base_from[count])
			{
				nb_int = nb_int * ft_strlen(base_from) + count;
				break ;
			}
			count++;
		}
		if (count == ft_strlen(base_from))
			break ;
		i++;
	}
	return (nb_int);
}

char	*ft_to_base(unsigned int nb, char *base_to, int signe)
{
	unsigned int	base_len;
	int				temp;
	char			*nbr;
	int				j;

	base_len = ft_strlen(base_to);
	nbr = (char *)malloc(sizeof(char) * 34);
	j = 0;
	while (nb != 0)
	{	
		temp = nb % base_len;
		nbr[j++] = base_to[temp];
		if (nb > base_len - 1)
			nb /= base_len;
		else
			nb = 0;
	}
	if (signe < 0 && nbr[0] != '\0')
		nbr[j++] = '-';
	ft_rev(nbr);
	nbr[j] = '\0';
	return (nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		signe;
	int		i;

	signe = 1;
	i = 0;
	if (ft_check_base(base_from) == 1 && ft_check_base(base_to) == 1)
	{
		while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
			i++;
		while (nbr[i] == '-' || nbr[i] == '+')
		{
			if (nbr[i] == '-')
				signe *= -1;
			i++;
		}
		return (ft_to_base(ft_to_deci(nbr, base_from, i), base_to, signe));
	}
	return (0);
}
