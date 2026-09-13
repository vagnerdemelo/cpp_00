/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:34:24 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/13 18:28:43 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONELIST_HPP
#define PHONELIST_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int		contactsQuantity;
	int		index;

	void display_headers(void);
	void display_one_contact_fields(int contact_index);
	void display_contacts_fields(int contact_index);
public:
	PhoneBook();

	void add_contact(void);
	void search_contact(void);

};

#endif
