NAME = 		convert

SRCS = 		main.cpp \

OBJS = 		${SRCS:.cpp=.o}

CPP	= 		c++

CPPFLAGS = 	-Wall -Werror -Wextra -std=c++98

all:		$(NAME)

.o: 		$(SRCS) Makefile
			$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS) Makefile
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			@rm -rf $(OBJS)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re