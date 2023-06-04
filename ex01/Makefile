NAME = phone_book
SRCS = main.cpp
INC = .
OBJS = ${SRCS:.cpp=.o}

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
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
