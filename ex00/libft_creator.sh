# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liulm <liulm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 12:32:48 by liulm             #+#    #+#              #
#    Updated: 2024/08/01 12:44:09 by liulm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -o libft.a -Wall -Wextra -Werror *.c
ar rcs libft.a *.o
rm -r *.o
