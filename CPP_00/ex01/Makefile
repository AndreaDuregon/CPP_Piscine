NAME	=	my_awesome_phonebook

SRCS	=	my_awesome_phonebook.cpp \
			Contact.cpp

INCS	=	Contact.hpp

CLANG	=	clang++

FLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME)

$(NAME)	:
			@$(CLANG) $(SRCS) -o $(NAME)
			@echo "\033[0;34mMY_AWESOME_PHONEBOOK COMPILED\033[0;0m"

clean	:
			rm -f $(NAME)
			@echo "\033[0;35mMY_AWESOME_PHONEBOOK CLEAN\033[0;0m"

re		:	clean all

.PHONY	:	all clean re