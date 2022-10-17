/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 09:53:44 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/02 18:30:52 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	ft_transform_nbr(char *nbr, char *dict_name)
{
	long	nb;
	int		size;
	char	**dict;

	nb = ft_check_is_number(nbr);
	size = 0;
	if (nb != -1)
	{
		size = file_confirme(dict_name);
		dict = read_file(dict_name);
		if (size > 0)
		{
			if (ft_all_line(dict, size) == 1)
				atoletters(dict, (unsigned int)nb);
			else
				ft_error(0);
		}
		else
			ft_error(0);
	}
	else
		ft_error(-1);
}

int	main(int argc, char **argv)
{
	char	**dict;

	dict = NULL;
	if (argc == 3)
	{
		ft_transform_nbr(argv[1], argv[2]);
	}
	else if (argc == 2)
	{
		ft_transform_nbr(argv[1], "numbers.dict");
	}
	else
		ft_error(-1);
	if (dict != NULL)
	{
		free(dict);
	}
	return (0);
}
