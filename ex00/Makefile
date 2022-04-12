CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	BraiiiiiiinnnzzzZ
RM		=	rm -rf
SRCS	=	main.cpp randomChump.cpp newZombie.cpp Zombie.cpp
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

