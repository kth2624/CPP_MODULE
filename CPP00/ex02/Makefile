# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkim <tkim@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 01:19:33 by tkim              #+#    #+#              #
#    Updated: 2022/10/10 16:57:11 by tkim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = test.cpp Account.cpp

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