# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:41:18 by araiteb           #+#    #+#              #
#    Updated: 2023/09/11 14:47:38 by araiteb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = animal
INCLUDE = Animal.hpp
SRCS = main.cpp Animal.cpp
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c  $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(EXEC)

re : fclean all
.PHONY: all clean fclean