/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:37:37 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/20 16:43:27 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			j = 0;
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
				{
					return (str + i);
				}
				j++;
			}
			i++;
		}
	}
	return (0);
}
