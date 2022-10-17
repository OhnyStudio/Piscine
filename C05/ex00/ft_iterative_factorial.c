/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:09:42 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/26 10:21:44 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	max;

	i = 1;
	max = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (i < max)
		{
			nb *= i;
			i++;
		}	
	}
	return (nb);
}
