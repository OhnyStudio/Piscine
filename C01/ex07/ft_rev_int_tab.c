/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:32:21 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/17 11:40:53 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp[sizeof(tab)];
	int	i;

	i = 0;
	while (i < size)
	{
		temp[i] = tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[size - 1 - i];
		i++;
	}
}