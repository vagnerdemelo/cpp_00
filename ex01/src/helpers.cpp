/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 22:09:15 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/09 23:12:27 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.hpp"

void stdout_endl(const std::string str)
{
	std::cout << str << std::endl;
}

std::string get_line(void)
{
	std::string input;
	std::getline(std::cin, input);

	return input;
}
