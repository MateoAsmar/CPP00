SRC = main.cpp PhoneBook.cpp Contact.cpp

NAME = PhoneBook
FLAGS = -Wextra -Werror -Wall -std=c++98
OBJS = ${SRC:.cpp=.o}

all : ${NAME}

${OBJS} : %.o:%.cpp
		c++ ${FLAGS} -c $< -o $@

${NAME} : ${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re :	fclean all

.PHONY : all clean  fclean
