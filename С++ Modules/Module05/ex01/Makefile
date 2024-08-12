NAME = 		ex01

SRCS = 		main.cpp \
			Bureaucrat.cpp \
			Form.cpp \

OBJS = 		${SRCS:.cpp=.o}

CPP	= 		c++

CPPFLAGS = 	-Wall -Werror -Wextra -std=c++98

HEADER =	Bureaucrat.hpp Form.hpp

all:		$(NAME)

.o: 		$(SRCS) $(HEADER)
			$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			@rm -rf $(OBJS)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re