/*
 * Animal.h
 *
 *  Created on: 25 Jun 2019
 *      Author: Dave
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include<iostream>

using namespace std;

class Animal
{
private:
	string name;


public:
	Animal();
	virtual ~Animal();

	void setName(string name);
	void speak() const;
};

#endif /* ANIMAL_H_ */
