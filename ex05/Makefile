# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 16:11:03 by brmajor           #+#    #+#              #
#    Updated: 2023/12/12 14:51:14 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Harl.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98

NAME = Harl

all: $(NAME)

$(NAME): $(SRC) Harl.hpp
	$(CC) $(SRC) -o $(NAME)

clean:
	@echo "No object files to clean"

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
