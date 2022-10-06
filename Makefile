CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCSDIR		= ./srcs
SRCS		= $(wildcard ft_*.c)
OBJS		= $(notdir $(SRCS:.c=.o))
INCLUDEDIR	= ./includes
INCLUDE		= ./includes/ft.h
NAME		= libft.a


all:			$(NAME)

clean:
				rm -f $(OBJS) 

fclean:			clean
				rm -f $(NAME)

re:				fclean all

$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS)
				ranlib $(NAME)

f:				fclean
