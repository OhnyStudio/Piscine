/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:59:52 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/22 08:52:37 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_can_upper(char c)
{
	if (c < '0' || c > 'z' || (c > '9' && c < 'A'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (ft_is_lower(str[i]) == 1)
			{	
				str[i] -= 32;
			}
			i++;
		}
		if (ft_is_upper(str[i]) == 1)
		{
			str[i] += 32;
		}
		if (ft_is_lower(str[i]) == 1 && ft_can_upper(str[i - 1]) == 1)
		{	
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
