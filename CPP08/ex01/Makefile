# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 16:35:09 by tkim              #+#    #+#              #
#    Updated: 2022/02/21 21:39:36 by tkim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp span.cpp
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