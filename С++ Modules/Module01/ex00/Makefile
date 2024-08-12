NAME = 		Zombie

SRCS = 		main.cpp \
			NewZombie.cpp \
			RandomChamp.cpp \
			Zombie.cpp \

OBJS = 		${SRCS:.cpp=.o}

CPP	= 		c++

CPPFLAGS = 	-Wall -Werror -Wextra -std=c++98

HEADER  = 	Zombie.hpp

all:		$(NAME)

.o: 		$(SRCS)
			$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			@rm -rf $(OBJS)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re