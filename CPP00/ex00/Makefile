NAME = megaphone
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp

$(NAME): $(SRC)
	$(CXX) $(SRC) $(CXXFLAGS) -o $(NAME)

all : $(NAME)

clean:
	rm -rf $(NAME)

re:	clean all

.PHONY: all clean re