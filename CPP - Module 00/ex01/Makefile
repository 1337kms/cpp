NAME = phonebook

SRC		=	phonebook.cpp contact.cpp

CC 		= c++

FLAGS	= -std=c++17 -Wall -Wextra -Werror -g

OBJS 	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

