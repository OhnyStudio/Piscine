/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:18:32 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/05 14:11:16 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);	
}

int	ft_strstr(char *str, char *charset, int start)
{
	int	i;
	int	j;

	i = start;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == charset[j])
		{
			if (charset[j + 1] == '\0')
				return (j + i);
			j++;
		}
		i++;
	}
	return (-1);
}

int	ft_check_split(char *str, char *charset, int i)
{
	int	open_sep;
	int	close_sep;	

	open_sep = ft_strstr(str, charset, i);
	close_sep = ft_strstr(str, charset, i);
	if (i == 0 && open_sep > -1)
	{
		close_sep = ft_strstr(str, charset, open_sep);
		if (close_sep > -1)
		{
			if (close_sep - (open_sep + 1 + ft_strlen(charset)) == 0)
				ft_check_split(str, charset, close_sep);
			else
				return (open_sep);
		}
	}
	else if (close_sep > -1)
	{			
		if (close_sep - (i + ft_strlen(charset)) == 0)
			ft_check_split(str, charset, close_sep);
		else
			return (close_sep);
	}
	return (-1);
}

int	ft_len(char *charset, int *pos_arr, int i)
{
	if (pos_arr[i + 2] == -1)
		return ((pos_arr[i + 1] - (ft_strlen(charset) + 1)));
	else
		return ((pos_arr[i + 1] - ft_strlen(charset)));
}

char	**ft_split(char *str, char *charset)
{
	int		i[3];
	int		tmp[100];
	char	**tab;

	i[0] = 0;
	i[1] = 0;
	while (i[0] != -1 && str[i[0]])
	{
		tmp[i[1]++] = ft_check_split(str, charset, i[0]);
		i[0] = tmp[i[1] - 1];
	}
	tab = (char **)malloc(sizeof(char *) * (i[1] -2));
	i[0] = 0;
	while (tmp[i[0]] != -1 && tmp[i[0] + 1] != -1)
	{
		i[1] = tmp[i[0]] + 1;
		tab[i[0]] = (char *)malloc(sizeof(char) * ft_len(charset, tmp, i[0]));
		i[2] = 0;
		while (i[1] <= tmp[i[0] + 1] - ft_strlen(charset))
			tab[i[0]][i[2]++] = str[i[1]++];
		i[0]++;
	}
	if (tab[0][0] != '\0')
		tab[i[0] - 1][i[2]] = '\0';	
	return (tab);
}
