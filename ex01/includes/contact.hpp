/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:21:17 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/20 09:46:54 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./types.hpp"

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
        private:
	public:
        t_llong         index;
        std::string     name;
        std::string     surname;
        std::string     nickname;
        std::string     number;
        std::string     secret;
};

#endif

