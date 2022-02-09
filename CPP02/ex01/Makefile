# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkim <tkim@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 23:51:53 by tkim              #+#    #+#              #
#    Updated: 2022/02/09 19:14:01 by tkim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp Fixed.cpp

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