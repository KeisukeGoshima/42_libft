CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCSDIR		= ./srcs
SRCS		= main.c convert.c hexdump_normal.c hexdump_option.c add_func.c
OBJS		= $(SRCS:.c=.o)
INCLUDEDIR	= ./includes
INCLUDE		= ./includes/ft.h
NAME		=  ft_hexdump


all:			$(NAME)

clean:
				rm -f $(OBJS) 

fclean:			clean
				rm -f $(NAME)

$(NAME):		$(OBJS)
				$(CC) $(OBJS) -o $(NAME)
				
