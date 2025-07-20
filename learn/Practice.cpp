#include "Practice.hpp"

Practice::Practice() : _value(13)
{
	std::cout << "consturcter called" << std::endl;
}

Practice::~Practice()
{
	std::cout << "deconstructor called" << std::endl;
}

Practice::Practice(Practice const& copy)
{
	std::cout << "copy constructor called" << std::endl;
	this->_value = copy._value;
}

Practice& Practice::operator=(Practice const& copy)
{
	std::cout << "copy assigment operator called" << std::endl;
	if (this != &copy)
	{
		this->_value = copy.getter();
	}
	return (*this);
}

int	Practice::getter(void) const
{
	std::cout << "member func getter called" << std::endl;
	return _value;
}

void	Practice::setter(int val)
{
	std::cout << "member func setter called" << std::endl;
	_value = val;
}

int main(void)
{
	Practice a;
	Practice b(a);
	Practice c;
	c = b;


	std::cout << a.getter() << std::endl;
	std::cout << b.getter() << std::endl;
	std::cout << c.getter() << std::endl;

}