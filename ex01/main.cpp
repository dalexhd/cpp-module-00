/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:52:25 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/20 09:45:02 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Agenda.hpp"

int main(int argc, char **argv)
{
	Agenda agenda;
	(void)argc;
	(void)argv;

	agenda.reader();
	return (0);
}
