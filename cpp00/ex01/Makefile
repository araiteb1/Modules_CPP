# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 16:58:10 by araiteb           #+#    #+#              #
#    Updated: 2023/08/16 13:07:27 by araiteb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC := phone
INCLUDE := contact.hpp phonebook.hpp
SRCS := PhoneBook.cpp contact.cpp
CC := c++ 
CFLAGS := -Wall -Wextra -Werror -std=c++98
OBJS := $(SRCS:.cpp=.o)

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