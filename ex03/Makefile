# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 17:23:31 by eperperi          #+#    #+#              #
#    Updated: 2024/11/18 19:06:42 by eperperi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	fixed

CC				=	c++ #-g -fsanitize=address

CFLAGS			=	-Wall -Werror -Wextra -std=c++11

SRC_FILES		=	main.cpp Fixed.cpp Bsp.cpp Point.cpp
OBJ_DIR			=	./obj

OBJ_FILES		= 	$(SRC_FILES:%.cpp=$(OBJ_DIR)/%.o)

all:	$(NAME)

$(NAME):	$(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -f $(NAME)

re:	fclean all