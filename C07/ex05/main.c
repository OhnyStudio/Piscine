/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:08:29 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/05 14:11:50 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

char **ft_split(char *str, char *charset);

int	main(void)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	split = ft_split("testfs$$ttesff$$tfkdjdkfj$$t", "$$t");
	while (split[i])
	{
		j = 0;
		while (split[i][j])
		{
			write(1, &split[i][j], 1);
			j++;
		}
		write(1, "\n", 1); 
		i++;
	}
	return (0);
}
