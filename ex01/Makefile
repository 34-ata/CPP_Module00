NAME = phonebook
SRCS = phonebook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	c++ -Wall -Werror -Wextra $(SRCS) -std=c++98 -o $(NAME)

re: clean all

clean:
	rm -rf $(NAME)

execute: $(NAME)
	./$(NAME)