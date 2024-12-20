NAME = megaphone
SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	c++ -Wall -Werror -Wextra $(SRCS) -std=c++98 -o $(NAME)

re: clean all

clean:
	rm -rf megaphone

execute: $(NAME)
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."