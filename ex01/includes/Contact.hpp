/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:21:17 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/03 18:31:19 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private:
		std::time_t 	created_time;
	public:
		int				index;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		number;
		std::string		secret;
		void			setCreatedTime(void);
		time_t			getCreatedTime(void);
};

#endif
