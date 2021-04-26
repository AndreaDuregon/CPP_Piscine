NAME	=	megaphone

SRCS	=	$(wildcard *.cpp)

CLANG	=	clang++

FLAGS	=	-Wall -Wextra -Werror

%.o			:	%.c
			@$(CLANG) $(FLAGS) -c $^ -o $@

all		:	$(NAME)

$(NAME)	:
			@$(CLANG) $(FLAGS) $(SRCS) -o $(NAME)
			@echo "\033[0;34mMEGAPHONE COMPILED\033[0;0m"

clean	:
			@rm -f $(NAME)
			@echo "\033[0;35mMEGAPHONE CLEAN\033[0;0m"

re		:	clean all

.PHONY	:	all clean re