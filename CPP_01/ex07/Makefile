NAME	=	replace

SRCS	=	replace.cpp

CLANG	=	clang++

FLAGS	=	-Wall -Wextra -Werror

%.o		:	%.cpp
			@$(CLANG) $(FLAGS) -c $^ -o $@

all		:	$(NAME)

$(NAME)	:
			@$(CLANG) $(FLAGS) $(SRCS) -o $(NAME)
			@echo "\033[0;34mREPLACE COMPILED\033[0;0m"

clean	:
			@rm -f $(NAME) filename.replace
			@echo "\033[0;35mREPLACE CLEAN\033[0;0m"

re		:	clean all

.PHONY	:	all clean re