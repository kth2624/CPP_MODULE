# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkim <tkim@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 01:19:23 by tkim              #+#    #+#              #
#    Updated: 2022/10/10 16:45:34 by tkim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = megaphone.cpp

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