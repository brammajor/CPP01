# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 16:11:04 by brmajor           #+#    #+#              #
#    Updated: 2023/12/11 14:18:23 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

NAME = Replace

CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	@echo "No object files to clean"

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
