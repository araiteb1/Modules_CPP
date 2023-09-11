# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 12:26:46 by araiteb           #+#    #+#              #
#    Updated: 2023/09/10 14:53:05 by araiteb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = claptrap
INCLUDE = ClapTrap.hpp
SRCS = main.cpp ClapTrap.cpp
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