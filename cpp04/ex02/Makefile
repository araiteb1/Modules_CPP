# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:41:18 by araiteb           #+#    #+#              #
#    Updated: 2023/12/16 01:58:40 by araiteb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = Brain
INCLUDE = Animal.hpp Cat.hpp Dog.hpp brain.hpp WrongAnimal.hpp WrongCat.hpp
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp brain.cpp  WrongAnimal.cpp WrongCat.cpp
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -c  $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(EXEC)

re : fclean all
.PHONY: all clean fclean