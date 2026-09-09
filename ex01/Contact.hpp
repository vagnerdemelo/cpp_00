/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:34:22 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/08 23:47:42 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	Contact();

	bool set_first_name(const std::string &value);
    bool set_last_name(const std::string &value);
    bool set_nickname(const std::string &value);
    bool set_phone_number(const std::string &value);
    bool set_darkest_secret(const std::string &value);

    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;
};

#endif
