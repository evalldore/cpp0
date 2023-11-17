NAME			:= phonebook
CPPFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g
SRCS			:= main.cpp phonebook.cpp contact.cpp
INCDIR			:= include/
BINDIR			:= bin/
SRCDIR			:= src/
OBJS			:= $(addprefix $(BINDIR), $(SRCS:.cpp=.o))
RM				:= rm -f
HEADERS			:= -I ./include
CC				:= c++

all : $(NAME)

$(BINDIR)%.o : $(SRCDIR)%.cpp
	@$(CC) -c $(CPPFLAGS) -o $@ $^ $(HEADERS)

$(NAME) : $(BINDIR) $(OBJS)
	@echo $(NAME): Compiling!
	@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS) $(HEADERS)

$(BINDIR) :
	@mkdir $(BINDIR)

clean:
	@echo $(NAME): Deleting binaries.
	@rm -r $(BINDIR)

fclean: clean
	@echo $(NAME): Deleting program.
	@rm -f $(NAME)

re : fclean all