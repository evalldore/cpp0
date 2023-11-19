NAME			:= account
CPPFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g
SRCS			:= tests.cpp Account.cpp
SRCDIR			:= src/
RM				:= rm -f
CC				:= c++

all : $(NAME)

$(NAME) : $(SRCS)
	@echo $(NAME): Compiling!
	@$(CC) $(CPPFLAGS) -o $(NAME) $(SRCS)

clean:
	@echo $(NAME): Deleting binaries.

fclean: clean
	@echo $(NAME): Deleting program.
	@rm -f $(NAME)

re : fclean all