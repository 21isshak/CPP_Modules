/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <iskaraag@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:30:48 by iskaraag          #+#    #+#             */
/*   Updated: 2025/08/04 21:14:10 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog is constructed" << std::endl;
}

Dog::Dog(Dog const& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog&	Dog::operator=(Dog const& copy)
{
	std::cout << "Dog assignment operator overload called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << _type << " is destructed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "WUFF! WUFF! WUFF!" << std::endl;
}

std::string	Dog::getIdea(int idea_nr) const
{
	if (idea_nr >= 0 && idea_nr < 100)
		return (brain->ideas[idea_nr]);
	else
		return("DOG BRAIN HAVE 100 IDEAS");
}

void	Dog::setIdea(int idea_nr, std::string new_ide)
{
	if (idea_nr >= 0 && idea_nr < 100)
		brain->ideas[idea_nr] = new_ide;
	else
		std::cout << "DOG BRAIN CAN SAVE 100 IDEAS" << std::endl;
}