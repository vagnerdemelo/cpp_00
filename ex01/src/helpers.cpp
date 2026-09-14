/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 22:09:15 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/13 23:52:14 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.hpp"

void ft_cout_endl(const std::string str)
{
	std::cout << str << std::endl;
}

void ft_cout(const std::string str)
{
	std::cout << str;
}

void ft_cout(int value)
{
	std::cout << value;
}

bool ft_get_line(std::string &input)
{
    if (!std::getline(std::cin, input))
        return false;

    return true;
}

std::string ft_adjust_field(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}
