# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/17 21:29:42 by samamaev          #+#    #+#              #
#    Updated: 2025/08/17 21:36:58 by samamaev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

MANDATORY = printf.c

OBJ_PATH = ${MANDATORY:.c=.o}

CC = cc 
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

$(NAME): ${OBJ_PATH}
	ar rcs ${NAME} ${OBJ_PATH}

all: ${NAME}

clean:
	${RM} ${OBJ_PATH}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re