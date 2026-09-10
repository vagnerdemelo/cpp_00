/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:36:09 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/09 21:02:57 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

int return_error(void)
{
	std::cout << "Valor inválido: String vazia" << std::endl;
	return 1;
}

int main(void)
{
	Contact contact;
	bool run = true;
	std::string command;

	while(run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			std::cout << "Vamos adicionar um contato!" << std::endl;
			std::string value;
			std::cout << "Digite o primeiro nome: ";
			std::getline(std::cin, value);
			if (!contact.set_first_name(value))
				return return_error();

			std::cout << "Digite o segundo nome: ";
			std::getline(std::cin, value);

			if (!contact.set_last_name(value))
				return return_error();

			std::cout << "Digite um apelido: ";
			std::getline(std::cin, value);

			if (!contact.set_nickname(value))
				return return_error();

			std::cout << "Digite um número de telefone: ";
			std::getline(std::cin, value);

			if (!contact.set_phone_number(value))
				return return_error();

			std::cout << "Digite o segredo mais obscuro: ";
			std::getline(std::cin, value);

			if (!contact.set_darkest_secret(value))
				return return_error();
		}
		else if (command == "SEARCH")
		{
			if (contact.get_first_name().empty() || contact.get_last_name().empty() || contact.get_nickname().empty() || contact.get_phone_number().empty() || contact.get_darkest_secret().empty())
				std::cout << "Um ou mais dados faltantes. Entre com o comando ADD para adicionar infomações de um contato." << std::endl;
			else
			{
				std::cout << contact.get_first_name() << std::endl;
				std::cout << contact.get_last_name() << std::endl;
				std::cout << contact.get_nickname() << std::endl;
				std::cout << contact.get_phone_number() << std::endl;
				std::cout << contact.get_darkest_secret() << std::endl;
			}
		}
		else if (command == "EXIT")
		{
			std::cout << "# Bye." << std::endl;
			run = false;
		}
		else
			std::cout << "Comando inválido: Digite um comando válido [ADD, SEARCH, EXIT]" << std::endl;
	}

	return 0;
}
