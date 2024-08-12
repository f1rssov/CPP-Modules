NAME = 		ex02

SRCS = 		main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \

OBJS = 		${SRCS:.cpp=.o}

CPP	= 		c++

CPPFLAGS = 	-Wall -Werror -Wextra -std=c++98

HEADER =	Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

all:		$(NAME)

.o: 		$(SRCS) $(HEADER)
			$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			@rm -rf $(OBJS) *_shrubbery

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re