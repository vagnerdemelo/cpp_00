/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 21:37:40 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/13 16:51:50 by vade-mel         ###   ########.fr       */
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
	if (this->contactsQuantity == 8){
		ft_cout("># The PhoneList is full! The oldest contact will be replaced by the new one.");
		for(int i = 1; i < 8; i++)
			this->contacts[i - 1] = this->contacts[i];
		this->contactsQuantity--;
		this->index--;
	}

	if (this->contactsQuantity < 8 && this->contacts[index].create_contact()){
		std::cout << "# The contact index " << this->index + 1 << "has been saved sucessfuly." << std::endl;
		this->contactsQuantity++;
		this->index++;
	}
	else{
		ft_cout("># The contact can't saved. Type 'ADD' to try again.");
	}
}

void PhoneBook::search_contact(void)
{
	if (this->contactsQuantity == 0)
		ft_cout("># Please, add a contact before searching. Exiting search mode now.");
}
