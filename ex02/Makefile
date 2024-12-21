NAME = tests
SRCS = Account.cpp tests.cpp

all: $(NAME)

$(NAME):
	c++ -Wall -Werror -Wextra $(SRCS) -std=c++98 -o $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf test.log

execute: $(NAME)
	./$(NAME) > test.log