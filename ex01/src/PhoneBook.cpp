/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 21:37:40 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/14 00:55:49 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contactsQuantity = 0;
	this->index = 0;
}

void PhoneBook::add_contact(void)
{
	Contact new_contact;
	if (!new_contact.create_contact()){
		if(!std::cin.eof())
			ft_cout_endl("># The contact can't be saved. Type 'ADD' to try again.");
		return;
	}

	if (this->contactsQuantity == 8){
		ft_cout_endl("># The PhoneList is full! The oldest contact will be replaced by the new one.");

		for(int i = 1; i < 8; i++)
			this->contacts[i - 1] = this->contacts[i];
		this->contactsQuantity--;
		this->index--;
	}

	std::cout << "# The contact index " << this->index + 1 << " has been saved successfuly." << std::endl;
	this->contacts[index] = new_contact;
	this->contactsQuantity++;
	this->index++;
}

void PhoneBook::search_contact(void)
{
	if (this->contactsQuantity == 0)
		ft_cout_endl("># Please, add a contact before searching. Exiting search mode now.");
	else{
		display_headers();
		validation_input();
	}
}

void PhoneBook::display_headers(void)
{
	ft_cout_endl("|-------------------------------------------|");
	ft_cout_endl("|     Index|First Name| Last Name|  Nickname|");
	ft_cout_endl("|----------|----------|----------|----------|");
	for (int contact = 0; contact < contactsQuantity; contact++)
		display_contacts_fields(contact);
	ft_cout_endl("|-------------------------------------------|");
	ft_cout_endl("");
	ft_cout("># To search a specific contact, type a number in the range of 1 to ");
	ft_cout(this->contactsQuantity);
	ft_cout_endl(".");
}

void PhoneBook::display_contacts_fields(int contact_index)
{
	ft_cout("|");
	std::cout << std::setw(10);
	ft_cout(contact_index + 1);
	ft_cout("|");
	std::cout << std::setw(10);
	ft_cout(ft_adjust_field(this->contacts[contact_index].get_first_name()));
	ft_cout("|");
	std::cout << std::setw(10);
	ft_cout(ft_adjust_field(this->contacts[contact_index].get_last_name()));
	ft_cout("|");
	std::cout << std::setw(10);
	ft_cout(ft_adjust_field(this->contacts[contact_index].get_nickname()));
	ft_cout_endl("|");
}

void PhoneBook::validation_input(void)
{
	while (true)
	{
		std::string input;
		int input_index;
		char extra;

		ft_cout(">SEARCH_MODE$ ");
		if (!std::getline(std::cin, input))
			return;

		std::stringstream stream(input);

		if ((!(stream >> input_index) || (stream >> extra)) || (input_index < 0 || input_index > this->contactsQuantity)){
			ft_cout_endl("# Invalid Index");
			continue;
		}

		if (input_index > 0)
			display_one_contact_fields(input_index);
		return;
	}
}

void PhoneBook::display_one_contact_fields(int contact_index)
{
	ft_cout("First Name: ");
	ft_cout_endl(this->contacts[contact_index - 1].get_first_name());
	ft_cout("Last Name: ");
	ft_cout_endl(this->contacts[contact_index - 1].get_last_name());
	ft_cout("Nickname: ");
	ft_cout_endl(this->contacts[contact_index - 1].get_nickname());
	ft_cout("Phone Number: ");
	ft_cout_endl(this->contacts[contact_index - 1].get_phone_number());
	ft_cout("Darkest Secret: ");
	ft_cout_endl(this->contacts[contact_index - 1].get_darkest_secret());
}
