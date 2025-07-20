/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <iskaraag@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:23:32 by iskaraag          #+#    #+#             */
/*   Updated: 2025/07/08 15:49:46 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP
//sample: ornek
//different betwwen struct and class is almost 0
//they work all the same but in class we should decide a scope(like a private and public)
class Sample {
	
	public:
		int	member_variable;

		Sample(void);//constructor(yapici)
		~Sample(void);//deconstructor(yikici)

		void	member_function(void);
		void	member_func(void);

};

class Sample_2 {
	
	public:
		float const	pi;
		int	i;

		Sample_2(float const p);
		~Sample_2(void);
		
		void	function(void)	const;//bunun anlami fonksiyon read onlydir!!!

};

class Sample_init {
	
	public:
		char	a1;
		int		a2;
		float	a3;
		
		Sample_init(char p1, int p2, float p3);
		~Sample_init(void);
};

class Sample_3 {
	
	public://possible to acces from anywhere
		int	publicI;
		
		Sample_3(void);
		~Sample_3(void);
		
		void	publicFunc( void ) const;
		
	private://possible only accest from inside class
		int _privateI;//it is good to use _ for private things, it will be easier to read

		void	_privateFunc( void ) const;
	
};

class Sample_4  { //usage of getters and setters
	public:		  //geters used to keep a value of a member
				  //setters used to change the value
		Sample_4 (void);
		~Sample_4 (void);
		
		int	geti(void) const;
		void	seti(int v);
	private:
		int	_i;
};


#endif