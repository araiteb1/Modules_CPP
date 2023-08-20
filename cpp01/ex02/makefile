# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 22:25:12 by araiteb           #+#    #+#              #
#    Updated: 2023/08/20 01:09:27 by araiteb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC := mn
SRCS := main.cpp
CC := c++ 
CFLAGS := -Wall -Wextra -Werror -std=c++98
OBJS := $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c  $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re : fclean all
.PHONY: all clean fclean