# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 15:43:06 by dioda-si          #+#    #+#              #
#    Updated: 2023/05/04 16:41:48 by dioda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++
RM		= rm -f
CPPFLAGS	= -std=c++98 -pedantic -g
#CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -g

SRC		= Contact.cpp Phonebook.cpp main.cpp
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

run: all
	@./phonebook

.PHONY: all clean fclean re run
