CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCSDIR		= ./srcs
SRCS		= $(wildcard *.c)
OBJS		= $(notdir $(SRCS:.c=.o))
INCLUDEDIR	= ./includes
INCLUDE		= ./includes/ft.h
NAME		= libft.a


all:			$(NAME)

clean:
				rm -f $(OBJS) 

fclean:			clean
				rm -f $(NAME)

$(NAME):		$(OBJS)
				$(CC) $(OBJS) -o $(NAME)
				
