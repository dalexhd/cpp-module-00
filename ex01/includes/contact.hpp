/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:21:17 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/29 15:42:01 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private:
	public:
		int				index;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		number;
		std::string		secret;
};

#endif