/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agenda.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:59:18 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/29 15:45:22 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include <cmath>

/*
** Incluimos la clase del contacto
*/
#include "Contact.hpp"

#ifndef MAX_CONTACTS
	#define MAX_CONTACTS 8
#endif

class Agenda
{
	private:
		Contact	contacts[MAX_CONTACTS];
	public:
		int		number_of_contacts;
		void	launch();
		void	add();
		void	search();
};

std::string	ask(std::string key);
std::string	truncate(std::string str, size_t width);
