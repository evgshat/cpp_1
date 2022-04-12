NAME	=	hithisisbrain
SRCS	=	main.cpp
OBJS	=	${SRCS:.cpp=.o}
RM		=	rm -rf
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o: %.cpp Makefile
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re



