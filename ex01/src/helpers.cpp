/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 22:09:15 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/13 18:22:17 by vade-mel         ###   ########.fr       */
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

std::string ft_get_line(void)
{
	std::string input;
	std::getline(std::cin, input);

	return input;
}
