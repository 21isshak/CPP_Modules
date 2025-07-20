#ifndef PRACTICE_HPP
#define PRACTICE_HPP

#include <iostream>

class Practice
{
	private:
		int	_value;


	public:
		Practice();
		~Practice();
		Practice(Practice const& copy);
		Practice& operator=(Practice const &copy);

		int		getter(void) const;
		void	setter(int const val);

};

#endif