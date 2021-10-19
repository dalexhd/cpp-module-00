/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:21:17 by aborboll          #+#    #+#             */
/*   Updated: 2021/10/19 22:32:52 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./types.hpp"

class contact
{
        private:
	public:
        t_llong index;
        char *name;
        char *surname;
        char *nickname;
};