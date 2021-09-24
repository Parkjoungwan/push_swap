
NAME = push_swap

CHECK = $(wildcard push_swap)

SRCS =  main.c\
		functions/atoi.c\
		functions/node_functions.c\
		functions/itoa.c\
		functions/check.c\

CC = gcc

FLAGS = -o $(NAME) -g -ggdb -Wall -Wextra -Werror

INCLUDES = -I./includes

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)

all : $(NAME)

clean :
ifeq (exist, $(shell [ -e $(NAME) ] && echo exist))
	rm $(NAME)
else
	@printf "No file\n"
endif

re : clean all

.PHONY : clean
