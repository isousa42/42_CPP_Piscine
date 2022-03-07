CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

NAME = Conversion
SRCS = main.cpp functions.cpp
OBJS = $(SRCS:.cpp=.o)

all = $(NAME)

$(NAME):
		$(CC) $(SRCS) $(FLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re