
NAME = push_swap

SRCS =  main.c

CC = gcc

FLAGS = -o $(NAME) -g -Wall -Wextra -Werror

INCLUDES = -I./include

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)

all : $(NAME)

clean :
	rm $(NAME)

re : clean all
