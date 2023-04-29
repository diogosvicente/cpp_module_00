# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 15:43:06 by dioda-si          #+#    #+#              #
#    Updated: 2023/04/29 15:43:39 by dioda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++
RM		= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRC		= phonebook.cpp
NAME		= phonebook

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

run1:
	./megaphone "shhhhh... I think the students are asleep..."

run2:
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."

run3:
	./megaphone

.PHONY: all clean fclean re run
