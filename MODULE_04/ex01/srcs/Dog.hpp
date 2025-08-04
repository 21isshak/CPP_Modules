/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <iskaraag@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:30:51 by iskaraag          #+#    #+#             */
/*   Updated: 2025/08/04 21:04:25 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	
	private:
		Brain *brain;
	
	public:
		Dog();
		Dog(Dog const& copy);
		Dog& operator=(Dog const& copy);
		virtual ~Dog();
		
		virtual void	makeSound() const;
		std::string	getIdea(int idea_nr) const;
		void	setIdea(int idea_nr, std::string new_ide);
};

#endif