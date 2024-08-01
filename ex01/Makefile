# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liulm <liulm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 12:03:14 by liulm             #+#    #+#              #
#    Updated: 2024/08/01 12:16:37 by liulm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

CC =		cc

FLAGS =		-Wall -Wextra -Werror

RM =		rm -f

HEADER =	includes/ft.h

SRCS =	ft_putchar.c		\
		ft_swap.c			\
		ft_putstr.c			\
		ft_strlen.c			\
		ft_strcmp.c

OBJS =	$(SRCS: .c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
		$(CC) $(FlAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:
			fclean all

.PHONY: all clean fclean re
