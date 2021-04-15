# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcharlsi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 22:38:22 by hcharlsi          #+#    #+#              #
#    Updated: 2021/02/08 22:38:24 by hcharlsi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/first_col_processing.c srcs/first_line_processing.c\
			srcs/matrix_processing.c srcs/matrix_width.c srcs/matrix_zero.c\
			srcs/matrix_length.c srcs/find_max_square.c srcs/is_correct_square.c\
			srcs/map_max_square.c srcs/print_map.c srcs/iterating_square.c\
			srcs/test_print_map.c

OBJS	=	${SRCS:.c=.o}

NAME	=	map

GCC		=	gcc
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

HEADERS	=	includes/bsq.h

.c.o:
		${GCC} ${CFLAGS} -c $< -I ${HEADERS} -o ${<:.c=.o}

${NAME}:	${OBJS}
		${GCC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean	all

.PHONY:		all	clean	fclean	re
