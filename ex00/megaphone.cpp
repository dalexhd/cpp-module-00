/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:40:04 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/12 18:40:07 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int u = 1; u < argc; ++u)
		{
			std::string str(argv[u]);
			for (size_t i = 0; i < str.length(); i++)
				std::cout << (char)std::toupper(str[i]);
			if (u + 1 < argc)
				std::cout << " ";
		}
		std::cout << "\n";
	}
	return (0);
}
