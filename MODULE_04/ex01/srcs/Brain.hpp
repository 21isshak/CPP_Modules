/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <iskaraag@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:42:54 by iskaraag          #+#    #+#             */
/*   Updated: 2025/08/04 21:14:54 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	
	private:
	
	public:
		Brain();
		Brain(Brain const& copy);
		Brain& operator=(Brain const& copy);
		~Brain();
		

		std::string	ideas[100];
};


#endif