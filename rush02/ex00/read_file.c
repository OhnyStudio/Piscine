/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboisve <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:04:19 by anboisve          #+#    #+#             */
/*   Updated: 2022/10/02 17:41:22 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	**ft_create_array(char **re_t, int size, char *name, int file_p)
{
	int		i;
	char	input[1];
	char	temp[500];

	i = 0;
	temp[0] = '\0';
	file_p = open(name, O_RDWR);
	re_t = (char **)malloc(size * sizeof(char *));
	while (read(file_p, input, 1) > 0)
	{
		if (input[0] != '\n')
			ft_add_char(temp, input[0]);
		else
		{	
			re_t[i] = (char *)malloc((ft_strlen(temp) + 1) * sizeof(char));
			ft_txtcopy(temp, re_t[i++]);
			temp[0] = '\0';
		}
	}
	close(file_p);
	return (re_t);
}

char	**read_file(char *name)
{
	char	**re_t;
	int		size;
	int		file_p;

	re_t = NULL;
	size = file_confirme(name);
	if (size < 1)
		return (NULL);
	else
	{
		re_t = ft_create_array(re_t, size, name, file_p);
	}
	return (re_t);
}
