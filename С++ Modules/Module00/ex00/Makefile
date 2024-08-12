NAME	=	megaphone

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

CPP		=	c++

FLAG	=	-Werror -Wextra -Wall -std=c++98

all:		$(NAME)

$(NAME):	@$(OBJS)
			@$(CPP) $(FLAG) $(OBJS) -o $(NAME)

clean:
			@rm -rf $(OBJS)

fclean:		clean
			@rm -rf $(NAME)

.PHONY:		all clean fclean re