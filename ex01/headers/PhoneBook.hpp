/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:34:24 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/09 23:15:40 by vade-mel         ###   ########.fr       */
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
public:
	PhoneBook();

	void add_contact(void);
	void search_contact(void);

};

#endif
