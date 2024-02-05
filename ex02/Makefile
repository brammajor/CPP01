# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 12:25:53 by brmajor           #+#    #+#              #
#    Updated: 2023/12/08 12:39:27 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

NAME = Brain

CC = c++ -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "No object files to clean."

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

