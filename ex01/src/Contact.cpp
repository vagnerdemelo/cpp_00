/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 23:48:10 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/09 23:52:41 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}
bool Contact::create_contact()
{
	stdout_endl("># Type the first name: ");
	this->firstName = get_line();

	stdout_endl("># Type the last name: ");
	this->lastName = get_line();

	stdout_endl("># Type a nickname: ");
	this->nickname = get_line();

	stdout_endl("># Type a phone number: ");
	this->phoneNumber = get_line();

	stdout_endl("># Type the darkest secret: ");
	this->darkestSecret = get_line();

	if (!(firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty()))
	{
		stdout_endl("># One or more fields are blank. The contact can't be saved.");
		return false;
	}

	stdout_endl("# Contact has been saved!");
	return true;
}

std::string Contact::get_first_name() const
{
	return firstName;
}

std::string Contact::get_last_name() const
{
	return lastName;
}

std::string Contact::get_nickname() const
{
	return nickname;
}

std::string Contact::get_phone_number() const
{
	return phoneNumber;
}

std::string Contact::get_darkest_secret() const
{
	return darkestSecret;
}
