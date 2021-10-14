/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:03:17 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/14 14:09:32 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/core.hpp"

static	void	add()
{
	std::cout << "Add\n";
}

static	void	search()
{
	std::cout << "Search\n";
}

void	core::reader()
{
	std::string res;

	while (1)
	{
		std::cout << "> ";
		std::cin >> res;
		if (res.compare("ADD") == 0)
			add();
		else if (res.compare("SEARCH") == 0)
			search();
		else if (res.compare("EXIT") == 0)
			break ;
	}
}
