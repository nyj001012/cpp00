# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 12:49:33 by yena              #+#    #+#              #
#    Updated: 2023/06/14 12:49:35 by yena             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	${NAME}

NAME:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

%.o: %.cpp
		${CC} ${CFLAGS} -I . -c $< -o ${<:.cpp=.o}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
