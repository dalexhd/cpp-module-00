/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:03:17 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/25 19:38:00 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Agenda.hpp"

static	std::string	ask(std::string key)
{ 
	std::string res;

	std::cout << "Please enter your " + key + ": ";
	std::cin >> res;
	return (res);
}

static	std::string	truncate(std::string str, size_t width)
{
    if (str.length() > width)
    	return str.substr(0, width - 1) + ".";
    return str;
}

void	Agenda::add()
{
	Contact contact;

	contact.first_name = ask("First Name");
	contact.last_name = ask("Last Name");
	contact.nickname = ask("Nickname");
	contact.number = ask("Mobile number");
	contact.secret = ask("Darkest Secret");
	contact.index = this->number_of_contacts;
	this->contacts[this->number_of_contacts] = contact;
	this->number_of_contacts++;
}


void	Agenda::search()
{
	Contact contact;

	std::cout << "Index    |First Name|Last Name|Nickname  \n";

	for (int i = 0; i < this->number_of_contacts; i++)
	{
		contact = this->contacts[i];
		std::cout <<
			truncate(std::to_string(contact.index), 10) + "|"
			+ truncate(contact.first_name, 10)+ "|"
			+ truncate(contact.last_name, 10) + "|"
			+ truncate(contact.nickname, 10) + "\n";
	}
}

void	Agenda::reader()
{
	std::string res;

	this->number_of_contacts = 0;
	while (1)
	{
		std::cout << "> ";
		std::cin >> res;
		if (res.compare("ADD") == 0)
			Agenda::add();
		else if (res.compare("SEARCH") == 0)
			search();
		else if (res.compare("EXIT") == 0)
			break ;
	}
}