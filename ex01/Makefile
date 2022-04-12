CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	More_brainz
RM		=	rm -rf
SRCS	=	main.cpp Zombie.cpp zombieHorde.cpp
OBJS	=	${SRCS:.cpp=.o}
HEADERS	=	Zombie.hpp

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o: %.cpp ${HEADERS} Makefile
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

