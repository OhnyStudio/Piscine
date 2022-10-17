# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsavard <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 11:24:05 by jsavard           #+#    #+#              #
#    Updated: 2022/10/02 18:38:00 by jsavard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02 
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC = file_confirme.c read_file.c check_number.c rush.c text_out.c error.c numtoletters.c

all: $(NAME)

%.o: %. c
	$(CC) $(FLAGS) -c -o $@ $^

$(NAME): $(SRC:.c=.o)
	$(CC) $(FLAGS) -o $@ $^

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re:fclean $(NAME)
	
