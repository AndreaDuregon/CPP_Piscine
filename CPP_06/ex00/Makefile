NAME	=	cast

SRCS	=	Cast.cpp \
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CLANG	=	clang++

FLAGS	=	-Wall -Wextra -Werror

%.o		:	%.cpp
			@$(CLANG) $(FLAGS) -c $^ -o $@

all		:	$(NAME)

$(NAME)	:
			@$(CLANG) $(FLAGS) $(SRCS) -o $(NAME)
			@echo "\033[0;34mCASTER COMPILED\033[0;0m"

clean	:
			@rm -rf $(OBJS)
			@echo "\033[0;35mCASTER CLEAN\033[0;0m"

fclean	:	clean
			@rm -rf $(NAME)

re		:	fclean all

test		:
			./$(NAME) 0
			./$(NAME) -4.25
			./$(NAME) nan
			./$(NAME) 42.0f
			./$(NAME) inf
			./$(NAME) -inf	
			./$(NAME) 448
			./$(NAME)

leaks	:
			leaks --atExit -- ./$(NAME) nan

.PHONY	:	all clean fclean re run