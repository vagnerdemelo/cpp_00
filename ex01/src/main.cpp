/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:36:09 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/13 20:16:19 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"
void show_instructions(void)
{
	ft_cout_endl("SEARCH - Exibe a lista de contatos.");
	ft_cout_endl("ADD - Adiciona um contato na lista.");
	ft_cout_endl("EXIT - Encerra o programa");
}
bool run_phonebook(PhoneBook phonelist)
{
	bool run = true;
	std::string command;

	while(run)
	{
		ft_cout(">");
		std::getline(std::cin, command);
		if (command.empty())
			continue;
		else if (command == "ADD")
			phonelist.add_contact();
		else if (command == "SEARCH")
			phonelist.search_contact();
		else if (command == "HELP")
			show_instructions();
		else if (command == "EXIT")
		{
			std::cout << "># Bye." << std::endl;
			run = false;
		}
		else
			ft_cout_endl("># Invalid command. Type [ADD, SEARCH or EXIT]");
	}
	return run;
}

int main(void)
{
	PhoneBook phonelist;
	ft_cout_endl("># PhoneBook #");
	ft_cout_endl("># Type one these commands [HELP, SEARCH, ADD, EXIT].");
	run_phonebook(phonelist);

	return 0;
}
