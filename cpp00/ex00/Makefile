# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 19:12:48 by araiteb           #+#    #+#              #
#    Updated: 2023/08/14 19:36:15 by araiteb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC := c++ 
CFLAGS := -Wall -Wextra -Werror -g -std=c++98
SRCS := megaphone.c
OBJS := $(SRCS:.c=.o)
EXEC := megaphone
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