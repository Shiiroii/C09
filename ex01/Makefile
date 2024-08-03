# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liulm <liulm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 12:03:14 by liulm             #+#    #+#              #
#    Updated: 2024/08/03 11:53:09 by liulm            ###   ########.fr        #
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

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:			fclean all

.PHONY: all clean fclean re
