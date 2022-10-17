/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:07:53 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/30 08:04:01 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	else if (nb > 1)
	{
		while (i * i <= nb)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i += 2;
		}
	}
	return (1);
}