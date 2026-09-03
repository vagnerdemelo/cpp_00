# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/03 20:20:17 by vade-mel          #+#    #+#              #
#    Updated: 2026/09/03 20:20:23 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := megaphone.cpp
OBJS := $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
