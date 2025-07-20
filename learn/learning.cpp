/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learning.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskaraag <iskaraag@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:39:47 by iskaraag          #+#    #+#             */
/*   Updated: 2025/07/09 16:48:15 by iskaraag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>//stdio streams
//https://cplusplus.com/ check it
#include "Sample.class.hpp"

//NAMESPACE
int	glob_var = 2;

namespace	First {
	int	glob_var = 4;
}

namespace	Second {
	int	glob_var = 7;
}

namespace Third = Second;


//CLASS_INSTANCE
Sample::Sample(void) {
	std::cout << "constructor called" << std::endl;

	//useage of this keyword//
	//this points to the current instance//
	//we use -> because it is a pointer//
	this->member_variable = 12;
	std::cout << "member_variable: " << this->member_variable << std::endl;

	this->member_func();
	
	return;//there is no need for return because constructor and destructor don't have a return type but it is better to use return it shows that you've done with code
}

Sample::~Sample(void) {
	std::cout << "Sample_Destructor called" << std::endl;
	return;
}

void	Sample::member_function(void) {
	std::cout << "member_function called" << std::endl;
	return;
}

void	Sample::member_func(void) {
	std::cout << "member_func called" << std::endl;
	return;
}

//initialization list
//": a1(p1), a2(p2), a3(p3)" this is the initiazlization part
Sample_init::Sample_init(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
	std::cout << "Constructuor called" << std::endl;
	std::cout << "this->a1= " << this->a1 << std::endl;
	std::cout << "this->a2= " << this->a2 << std::endl;
	std::cout << "this->a3= " << this->a3 << std::endl;
}

Sample_init::~Sample_init(void) {
	std::cout << "Sample_init_Deconstructuor called" << std::endl;
}

Sample_2::Sample_2(float const p) : pi(p), i(21) {
	std::cout << "Sample_2 constructuor called" << std::endl;
	return;
}

Sample_2::~Sample_2(void) {
	std::cout << "Sample_2 deconstructuor called" << std::endl;
	return;
}

void	Sample_2::function(void) const {
	std::cout << "this->pi= " << this->pi << std::endl;	
	std::cout << "this->i= " << this->i << std::endl;	
	//this->i = 14;//uncommenting this line will give error because we used "const" for "function"
	return;
}

Sample_3::Sample_3(void) {
	std::cout << "Sample_3 constructor called" << std::endl;
	
	this->publicI = 0;
	std::cout << "this->publicI= " << this->publicI << std::endl;
	this->_privateI = 0;//this only way to use private things from inside of the class
	std::cout << "this->_privateI= " << this->_privateI << std::endl;
	
	this->publicFunc();
	this->_privateFunc();
	return;
}

Sample_3::~Sample_3(void) {
	std::cout << "Sample_3 destructor called" << std::endl;
	return;
}

void	Sample_3::publicFunc(void) const {
	std::cout << "Sample_3 member publicFunc called" << std::endl;
	return;
}

void	Sample_3::_privateFunc(void) const {
	std::cout << "Sample_3 member _privateFunc called" << std::endl;
	return;
}

Sample_4::Sample_4(void) {
	std::cout << "Sample_4 constructor called" << std::endl;
	this->seti(0);
	std::cout << "this->geti()= " << this->geti() << std::endl;
	return;
}

Sample_4::~Sample_4(void) {
	std::cout << "Sample_4 destructor called" << std::endl;
	return;
}

int	Sample_4::geti(void) const {
	return this->_i;//returning a copy of _i
}

void	Sample_4::seti(int v) {
	if (v >= 0)
		this->_i = v;
	return;
}

int	main(void)
{
	printf("****************\033[1;35mNAMECPACE_EXAMPLE\033[0m****************\n");
	printf("1. glob_var =>         %d\n", glob_var);
	printf("2. glob_var(First) =>  %d\n", First::glob_var);
	printf("3. glob_var(Second) => %d\n", Second::glob_var);
	printf("4. glob_var(Third) =>  %d\n", Third::glob_var);
	printf("5. glob_var(::) =>     %d\n", ::glob_var);//this use with the namespace operator(::) is refering to the normal global scope
	
	printf("\n*******************\033[1;35mSTDIO_STREAMS\033[0m******************\n");
	char	buffer[200];
	std::cout << "MARABA ISO" << std::endl;//endl: carriage return(newline)
	std::cout << "ISO? write something: ";
	std::cin >> buffer;
	std::cout << "you wrote: \033[1;36m" << buffer << "\033[0m :THX!" << std::endl;
	
	printf("\n****************\033[1;35mCLASS_INSTANCE\033[0m****************\n");
	//instance: misal
	Sample instance;
	instance.member_function();
	instance.member_variable = 21;
	std::cout << "member_variable: " << instance.member_variable << std::endl;
	printf("\n**************\033[1;35mCLASS_INIT_LIST\033[0m**************\n");
	Sample_init exmpl('a', 21, 1.24);
	Sample_init exmpl1('b', 13, 2.23);
	printf("\n*****************\033[1;35mCONST\033[0m*****************\n");
	//const yani constant sabitlik icin kullanilir
	//bir degerin  degistirelemeyecigini belirtir
	//yani bir degisken sadece read-only halinde durur
	//derleyici icin kodun okunurlugu icin ve yanlisliklari onlemek icin cok iyidir
	Sample_2 exmpl2(3.14);
	exmpl2.function();
	Sample_3 exmpl3;
	exmpl3.publicI = 21;
	std::cout << "exmpl3.publicI= " << exmpl3.publicI << std::endl;
	exmpl3.publicFunc();
	//exmpl3._privateI = 21;
	//std::cout << "exmpl3._privateI= " << exmpl3._privateI << std::endl;
	//exmpl3._privateFunc(); //uncommenting these lines will give error beacuse we will be trying to access private things from outside
								//the only way to acces to the private things is possible form inside of the class
	
	Sample_4 exmpl4;
	exmpl4.seti(21);
	std::cout << "exmpl4.geti()= " << exmpl4.geti() << std::endl;
	exmpl4.seti(-21);
	std::cout << "exmpl4.geti()= " << exmpl4.geti() << std::endl;
	
	return (0);
}
