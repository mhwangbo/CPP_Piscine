# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/30 14:46:13 by mhwangbo          #+#    #+#              #
#    Updated: 2018/10/01 11:50:56 by mhwangbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone_book

SRC = phone_book.cpp \
	main.cpp

INC = -I .

OBJ = $(SRC:.cpp=.o)

CC = clang++

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ):
	$(CC) $(FLAGS) $(INC) -c $(SRC)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, re, clean, fclean
