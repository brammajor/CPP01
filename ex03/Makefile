# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 12:48:55 by brmajor           #+#    #+#              #
#    Updated: 2023/12/08 14:13:37 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98

NAME = Violence

$(NAME): $(SRC) Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(SRC) -o $(NAME)
	
all: $(NAME)

clean:
	@echo "No object files to clean."
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
