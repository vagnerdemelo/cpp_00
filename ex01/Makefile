# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/08 21:53:35 by vade-mel          #+#    #+#              #
#    Updated: 2026/09/09 22:54:48 by vade-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonelist

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
INCLUDES = -Iheaders

SRC_FOLDER = src/
OBJ_FOLDER = objs/
SRCS := $(SRC_FOLDER)main.cpp \
		$(SRC_FOLDER)helpers.cpp \
		$(SRC_FOLDER)Contact.cpp \
		$(SRC_FOLDER)PhoneBook.cpp
OBJS = $(patsubst $(SRC_FOLDER)%.cpp,$(OBJ_FOLDER)%.o,$(SRCS))

.PHONY: all clean fclean re run

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Criando $(NAME)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "$(NAME) criado com sucesso!"

$(OBJ_FOLDER):
	@mkdir -p $(OBJ_FOLDER)

$(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.cpp | $(OBJ_FOLDER)
	@echo "Compilando $<..."
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "Removendo arquivos objeto..."
	@rm -rf $(OBJ_FOLDER)
	@echo "Arquivos objetos removidos!"

fclean: clean
	@echo "Removendo $(NAME) e arquivos objeto..."
	@rm -rf $(NAME)
	@echo "$(NAME) e arquivos objetos removidos!"

re: fclean all

run:
	@echo "Iniciando $(NAME)"
	@./$(NAME)
