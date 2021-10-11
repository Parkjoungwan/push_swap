
NAME = push_swap

CHECK = $(wildcard push_swap)

SRCS =  main.c\
		functions/atoi.c\
		functions/node_functions.c\
		functions/itoa.c\
		functions/check.c\
		functions/push_swap.c\
		functions/push_swap_utils.c\
		functions/node_control.c\
		functions/optimize3.c\
		functions/optimize3_1.c\
		functions/optimize5.c

CC = gcc

FLAGS = -o $(NAME) -Wall -Wextra -Werror

INCLUDES = -I./includes

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)

all : $(NAME)

clean :
ifeq (exist, $(shell [ -e $(NAME) ] && echo exist))
	rm $(NAME)
else
	@printf "No file to remove\n"
endif

re : clean all

.PHONY : clean
