/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:35:50 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/28 18:10:54 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Agenda.hpp"

std::string	ask(std::string key)
{
	std::string res;

	std::cout << "Please enter your " + key + ": ";
	std::cin >> res;
	return (res);
}

std::string truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width - 1) + ".";
	else
		str.append(std::string(10 - str.length(), ' '));
	return (str);
}
