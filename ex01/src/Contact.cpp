/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 23:48:10 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/14 00:50:07 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}
bool Contact::create_contact()
{
	ft_cout_endl("># Type the first name: ");
	if (!ft_get_line(this->firstName))
		return false;
	ft_cout_endl("># Type the last name: ");
	if (!ft_get_line(this->lastName))
		return false;
	ft_cout_endl("># Type a nickname: ");
	if (!ft_get_line(this->nickname))
		return false;
	ft_cout_endl("># Type a phone number: ");
	if (!ft_get_line(this->phoneNumber))
		return false;
	ft_cout_endl("># Type the darkest secret: ");
	if (!ft_get_line(this->darkestSecret))
		return false;
	if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty())
	{
		clear_fields();
		ft_cout_endl("># One or more fields are blank. The contact can't be saved.");
		return false;
	}

	return true;
}
void Contact::clear_fields()
{
	firstName.clear();
	lastName.clear();
	nickname.clear();
	phoneNumber.clear();
	darkestSecret.clear();
}
std::string Contact::get_first_name() const
{
	return this->firstName;
}

std::string Contact::get_last_name() const
{
	return this->lastName;
}

std::string Contact::get_nickname() const
{
	return this->nickname;
}

std::string Contact::get_phone_number() const
{
	return this->phoneNumber;
}

std::string Contact::get_darkest_secret() const
{
	return this->darkestSecret;
}
