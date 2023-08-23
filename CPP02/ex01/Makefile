# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 00:02:11 by araiteb           #+#    #+#              #
#    Updated: 2023/08/23 00:48:01 by araiteb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = fixed
INCLUDE = Fixed.hpp
SRCS = main.cpp Fixed.cpp
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c  $< -o $@

clean:
	rm -f $(OBJS) *.replace

fclean: clean
	rm -f $(EXEC)

re : fclean all
.PHONY: all clean fclean