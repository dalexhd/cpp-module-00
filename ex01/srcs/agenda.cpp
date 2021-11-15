/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:03:17 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/15 19:39:07 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Agenda.hpp"

void	Contact::setCreatedTime(void)
{
	this->created_time = timestamp();
}

time_t	Contact::getCreatedTime(void)
{
	return (this->created_time);
}

int	Agenda::getOldestEntry(void)
{
	Contact 	oldestContact;
	int			cacheIndex;

	cacheIndex = 0;
	if (this->number_of_contacts < MAX_CONTACTS)
		return this->number_of_contacts;
	for (int i = 0; i < this->number_of_contacts; i++)
	{
		if (i == 0)
			oldestContact = this->contacts[i];
		else if (this->contacts[i].getCreatedTime() < oldestContact.getCreatedTime())
		{
			cacheIndex = i;
			oldestContact = this->contacts[i];
		}
	}
	return (cacheIndex);
}

void	Agenda::add()
{
	Contact contact;

	contact.first_name = ask("First Name");
	contact.last_name = ask("Last Name");
	contact.nickname = ask("Nickname");
	contact.number = ask("Mobile number");
	contact.secret = ask("Darkest Secret");
	contact.index = this->getOldestEntry();
	if (this->number_of_contacts == MAX_CONTACTS)
		this->number_of_contacts--;
	contact.setCreatedTime();
	this->contacts[contact.index] = contact;
	this->number_of_contacts++;
}

bool	Agenda::display_contacts()
{
	Contact 	contact;

	if (this->number_of_contacts == 0)
	{
		std::cout << "No contacts found in the DB. Please insert one record by typing \"ADD\" command.\n";
		return (false);
	}
	else
		std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	for (int i = 0; i < this->number_of_contacts; i++)
	{
		contact = this->contacts[i];
		std::cout <<
			"|" + truncate(std::to_string(contact.index), 10) + "|"
			+ truncate(contact.first_name, 10)+ "|"
			+ truncate(contact.last_name, 10) + "|"
			+ truncate(contact.nickname, 10) + "|\n";
	}
	return (true);
}

void	Agenda::search()
{
	Contact 	contact;
	std::string search_id;

	if (this->display_contacts())
	{
		search_id = ask("Please enter the id that you want to search for");
		for (int i = 0; i < this->number_of_contacts; i++)
		{
			contact = this->contacts[i];
			if (std::to_string(contact.index).compare(search_id) == 0)
			{
				std::cout << "\n" << "Result: \n";
				std::cout <<
					"Index: " << std::to_string(contact.index) << "\n" <<
					"First Name: " << contact.first_name << "\n" <<
					"Last Name: " << contact.last_name << "\n" <<
					"Nickname: " << contact.nickname << "\n" <<
					"Mobile number: " << contact.number << "\n" <<
					"Darkest Secret : " << contact.secret << "\n";
				return ;
			}
		}
		std::cout << "No contacts matching \"" << search_id << "\" index in the DB.\n";
	}
}

void	Agenda::launch()
{
	std::string res;

	this->number_of_contacts = 0;
	while (std::cout << "> " && std::getline(std::cin, res))
	{
		if (res.compare("ADD") == 0)
			Agenda::add();
		else if (res.compare("SEARCH") == 0)
			search();
		else if (res.compare("EXIT") == 0)
			break ;
	}
}
