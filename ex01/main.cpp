/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:52:25 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/14 11:58:20 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/core.hpp"

int main(int argc, char **argv)
{
	core core;
	(void)argc;
	(void)argv;

	core.reader();
	return (0);
}
