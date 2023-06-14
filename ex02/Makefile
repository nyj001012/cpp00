# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 12:49:46 by yena              #+#    #+#              #
#    Updated: 2023/06/14 12:49:46 by yena             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
SRCS = tests.cpp \
	   Account.cpp
INC = .
OBJS = ${SRCS:.cpp=.o}

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

%.o: %.cpp
	${CC} ${CFLAGS} -I ${INC} -c $< -o ${<:.cpp=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
