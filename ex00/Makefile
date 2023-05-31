NAME = megaphone
SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	${NAME}

NAME:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

%.o: %.c
		${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
