/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:36:09 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/13 17:51:01 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonelist;
	bool run = true;
	std::string command;

	while(run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonelist.add_contact();
		else if (command == "SEARCH")
		{
			phonelist.search_contact();
		}
		else if (command == "EXIT")
		{
			std::cout << "># Bye." << std::endl;
			run = false;
		}
		else
			ft_cout_endl("># Invalid command. Type [ADD, SEARCH or EXIT]");
	}

	return 0;
}
