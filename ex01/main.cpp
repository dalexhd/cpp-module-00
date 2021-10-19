/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:52:25 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/19 22:34:14 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/agenda.hpp"

int main(int argc, char **argv)
{
	agenda agend;
	(void)argc;
	(void)argv;

	agend.reader();
	return (0);
}
