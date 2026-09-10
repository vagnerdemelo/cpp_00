# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/08 21:53:35 by vade-mel          #+#    #+#              #
#    Updated: 2026/09/09 21:26:16 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonelist

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := Contact.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)

.PHONY: all clean fclean re run

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Criando $(NAME)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "$(NAME) criado com sucesso!"

%.o: %.cpp
	@echo "Compilando $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "Removendo arquivos objeto..."
	@rm -f $(OBJS)
	@echo "Arquivos objetos removidos!"

fclean: clean
	@echo "Removendo $(NAME) e arquivos objeto..."
	@rm -f $(NAME)
	@echo "$(NAME) e arquivos objetos removidos!"

re: fclean all

run:
	@echo "Iniciando $(NAME)"
	@./$(NAME)
