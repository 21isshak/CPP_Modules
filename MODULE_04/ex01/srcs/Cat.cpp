/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <iskaraag@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:30:43 by iskaraag          #+#    #+#             */
/*   Updated: 2025/08/04 21:12:33 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat is constructed" << std::endl;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat&	Cat::operator=(Cat const& copy)
{
	std::cout << "Cat assignment operator overload called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << _type << " is destructed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MEOOOOOOOW!" << std::endl;
}

std::string	Cat::getIdea(int idea_nr) const
{
	if (idea_nr >= 0 && idea_nr < 100)
		return (brain->ideas[idea_nr]);
	else
		return("CAT BRAIN JUST CAME 100 IDEAS");
}

void	Cat::setIdea(int idea_nr, std::string new_ide)
{
	if (idea_nr >= 0 && idea_nr < 100)
		brain->ideas[idea_nr] = new_ide;
	else
		std::cout << "CAT BRAIN CAN SAVE 100 IDEAS" << std::endl;
}