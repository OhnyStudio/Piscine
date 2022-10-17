/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:30:17 by jsavard           #+#    #+#             */
/*   Updated: 2022/09/21 10:26:03 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest < size)
		len_src += len_dest;
	else
		len_src += size;
	if (size > 0)
	{
		while (src[i] && (i + len_dest) < size - 1)
		{
			dest[i + len_dest] = src[i];
			i++;
		}
		dest[i + len_dest] = '\0';
	}
	return (len_src);
}
