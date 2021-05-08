NAME	=	base

SRCS	=	Base.cpp \
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CLANG	=	clang++

FLAGS	=	-Wall -Wextra -Werror

%.o		:	%.cpp
			@$(CLANG) $(FLAGS) -c $^ -o $@

all		:	$(NAME)

$(NAME)	:
			@$(CLANG) $(FLAGS) $(SRCS) -o $(NAME)
			@echo "\033[0;34mBASE COMPILED\033[0;0m"

clean	:
			@rm -rf $(OBJS)
			@echo "\033[0;35mBASE CLEAN\033[0;0m"

fclean	:	clean
			@rm -rf $(NAME)

re		:	fclean all

test	:
			./$(NAME)

leaks	:
			leaks --atExit -- ./$(NAME)

.PHONY	:	all clean fclean re test leaks