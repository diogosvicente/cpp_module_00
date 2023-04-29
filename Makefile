CC 			= g++
RM 			= rm -f
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRC 		= megaphone.cpp
NAME 		= megaphone

OBJ 		= $(SRC:.cpp=.o)

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
