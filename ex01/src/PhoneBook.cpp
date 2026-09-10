/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 21:37:40 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/09 23:53:53 by vade-mel         ###   ########.fr       */
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
	if (this->contactsQuantity == 8)
	{
		stdout_endl("># The PhoneList is full! The oldest contact will be replaced by the new one.");
	}
	else if (this->contactsQuantity < 8 && this->contacts[index].create_contact())
		contactsQuantity++;
}

void PhoneBook::search_contact(void)
{
	if (this->contactsQuantity == 0)
		stdout_endl("># Add a contact before searching!");
}
