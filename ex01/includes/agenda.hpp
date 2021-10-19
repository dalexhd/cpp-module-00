/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:59:18 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/19 22:23:17 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

/*
** Incluimos las constantes.
*/
#include "constants.hpp"

/*
** Incluimos la parte interna.
*/
#include "internal.hpp"

/*
** Incluimos la parte de colores.
*/
#include "color.hpp"


/*
** Incluimos la clase del contacto
*/
#include "contact.hpp"

class agenda
{
	private:
		contact	contact[8];
	public:
		void reader();
};
