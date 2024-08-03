# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 12:03:14 by liulm             #+#    #+#              #
#    Updated: 2024/08/03 01:36:10 by lionelulm        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

CC =		cc

CFLAGS =		-Wall -Wextra -Werror

RM =		rm -f

HEADER =	includes/

SRCS =	srcs/ft_putchar.c			\
		srcs/ft_swap.c				\
		srcs/ft_putstr.c			\
		srcs/ft_strlen.c			\
		srcs/ft_strcmp.c

OBJS =	${SRCS:.c=.o}

.c.o:	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:
			${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:
			fclean all

.PHONY: all clean fclean re
