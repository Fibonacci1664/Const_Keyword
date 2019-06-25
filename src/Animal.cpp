/*
 * Animal.cpp
 *
 *  Created on: 25 Jun 2019
 *      Author: Dave
 */

#include "Animal.h"

Animal::Animal()
{
	// TODO Auto-generated constructor stub

}

Animal::~Animal()
{
	// TODO Auto-generated destructor stub
}

void Animal::setName(string name)
{
	this->name = name;
}

void Animal::speak() const
{
	cout << "My name is: " << name << endl;
}

