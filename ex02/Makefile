# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 23:17:57 by vade-mel          #+#    #+#              #
#    Updated: 2026/09/23 23:44:13 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Account
TEST_NAME := Test

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS := Account.hpp

SRCS := Account.cpp
OBJS := $(SRCS:.cpp=.o)

SRCS_TEST := tests.cpp
OBJS_TEST := $(SRCS_TEST:.cpp=.o)

.PHONY: all clean fclean re test

all: $(NAME)

test: $(TEST_NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(TEST_NAME): $(OBJS) $(OBJS_TEST)
	$(CXX) $(CXXFLAGS) $(OBJS) $(OBJS_TEST) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS): $(HEADERS)
$(OBJS_TEST): $(HEADERS)

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_TEST)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_NAME)

re: fclean all
