# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 14:22:45 by brmajor           #+#    #+#              #
#    Updated: 2023/12/07 14:56:19 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

CC = c++ -Wall -Werror -Wextra -std=c++98

NAME = BraiiiiiiinnnzzzZ

$(NAME): $(SRC) Zombie.hpp
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "No object files to clean."

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
