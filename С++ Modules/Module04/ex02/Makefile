NAME = 		ex02

SRCS = 		main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp

OBJS = 		${SRCS:.cpp=.o}

CPP	= 		c++

CPPFLAGS = 	-Wall -Werror -Wextra -std=c++98

HEADER =	WrongCat.hpp WrongAnimal.hpp Animal.hpp Dog.hpp Cat.hpp \
			Brain.hpp

all:		$(NAME)

.o: 		$(SRCS) $(HEADER)
			$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			@rm -rf $(OBJS)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re