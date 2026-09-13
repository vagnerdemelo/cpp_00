/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 22:09:59 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/13 19:34:08 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_HPP
#define HELPERS_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <limits>

void ft_cout_endl(const std::string str);
void ft_cout(const std::string str);
void ft_cout(int value);

std::string ft_get_line(void);
std::string ft_adjust_field(std::string str);
#endif
