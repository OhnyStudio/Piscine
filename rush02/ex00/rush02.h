/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboisve <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:12:56 by anboisve          #+#    #+#             */
/*   Updated: 2022/10/02 18:32:43 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
long	ft_check_is_number(char *str);
int		ft_all_line(char **dict, int size);
void	ft_txtcopy(char *in, char *out);
void	ft_error(int i);
void	ft_add_char(char *tab, char in);
char	**read_file(char *name);
int		file_confirme(char *f_name);
void	atoletters(char **dict, unsigned int nbr);
int		atoidict(char *str);
void	sortdict(char **dict);
#endif
