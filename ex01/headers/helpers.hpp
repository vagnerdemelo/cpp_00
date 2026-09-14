/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 22:09:59 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/13 23:53:14 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_HPP
#define HELPERS_HPP

#include <string>
#include <iostream>

void ft_cout_endl(const std::string str);
void ft_cout(const std::string str);
void ft_cout(int value);

bool ft_get_line(std::string &input);

std::string ft_adjust_field(std::string str);
#endif
