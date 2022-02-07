# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 01:20:36 by tkim              #+#    #+#              #
#    Updated: 2022/02/08 01:22:13 by tkim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CXX = clang++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp Zombie.cpp ZombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(SRC) $(CXXFLAGS) -o $(NAME)

all : $(NAME)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re:	clean all

.PHONY: all clean re fclean