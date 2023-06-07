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
