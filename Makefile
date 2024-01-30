NAME = push_swap
LIBFTDIR = ./libft
MAKE = make
CC = cc
CFLAGS = -Wall -Wextra -Werror 
HEAD = includes/push_swap.h

SRCS = srcs/push_swap.c \
		srcs/rotate.c \
		srcs/reverse_rotate.c \
		srcs/push.c \
		srcs/helper_functions.c \
		srcs/error_handling.c \
		srcs/swap.c \
		srcs/algo.c \

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
		@$(MAKE) -C $(LIBFTDIR) 
		@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME) 

clean:
		@rm -f $(OBJS)
		@$(MAKE) clean -C $(LIBFTDIR)

fclean: clean
		@rm -f $(NAME)
		@rm -f libft.a
		@$(MAKE) fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: all clean fclean re
