/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 19:26:52 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/03 20:16:08 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		int count = 1;

		while (count < argc)
		{
			int i = 0;
			while (argv[count][i] != '\0')
			{
				std::cout << static_cast<char>(std::toupper(argv[count][i]));
				i++;
			}
			count++;
		}
		std::cout << std::endl;
	}
	return 0;
}

// int main(int argc, char const *argv[])
// {
// 	if (argc == 1)
// 	{
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	}
// 	else
// 	{
// 		for (int count = 1; count < argc; count++)
// 		{
// 			std::string str(argv[count]);

// 			for (size_t i = 0; i < str.length(); i++)
// 			{
// 				std::cout << static_cast<char>(std::toupper(str[i]));
// 			}
// 		}
// 		std::cout << std::endl;
// 	}
// 	return 0;
// }
