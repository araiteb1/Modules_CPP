# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 04:01:59 by araiteb           #+#    #+#              #
#    Updated: 2023/08/21 04:02:56 by araiteb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = harl
INCLUDE = Harl.hpp
SRCS = main.cpp Harl.cpp
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