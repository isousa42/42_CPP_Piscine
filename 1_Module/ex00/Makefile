CC = clang++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = brainz
SRCS = main.cpp Zombie.cpp
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