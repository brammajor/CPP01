# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 11:46:10 by brmajor           #+#    #+#              #
#    Updated: 2023/12/08 12:22:11 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp zombieHorde.cpp

NAME = ZombieHorde

CC = c++ -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC) Zombie.hpp
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "No object files to clean."

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
