/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 23:48:10 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/08 23:57:43 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

bool Contact::set_first_name(const std::string &value)
{
	if (value.empty())
		return false;

	firstName = value;
	return true;
}

bool Contact::set_last_name(const std::string &value)
{
	if (value.empty())
		return false;

	lastName = value;
	return true;
}

bool Contact::set_nickname(const std::string &value)
{
	if (value.empty())
		return false;

	nickname = value;
	return true;
}

bool Contact::set_phone_number(const std::string &value)
{
	if (value.empty())
		return false;

	phoneNumber = value;
	return true;
}

bool Contact::set_darkest_secret(const std::string &value)
{
	if (value.empty())
		return false;

	darkestSecret = value;
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
