/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:47:06 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/06 10:46:28 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		i++;
	}
	return (i);
}

void	*ft_addstr(int size, char **strs, char *sep, char *new_str)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	while (j < size)
	{
		k = 0;
		while (strs[j][k])
		{
			new_str[i++] = strs[j][k++];
		}
		l = 0;
		if (j < size - 1)
		{
			while (sep[l])
				new_str[i++] = sep[l++];
		}
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		sep_len;
	int		strs_len;
	int		total_len;
	int		i;

	if (size == 0)
	{
		return ((char *)malloc(1));
	}
	i = 0;
	sep_len = ft_strlen(sep) * (size - 1);
	strs_len = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	total_len = strs_len + sep_len + 1;
	new_str = (char *)malloc(sizeof(char) * total_len);
	if (new_str == NULL)
		return (0);
	return (ft_addstr(size, strs, sep, new_str));
}
