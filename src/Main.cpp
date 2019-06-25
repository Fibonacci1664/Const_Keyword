/*
 * Main.cpp
 *
 *  Created on: 25 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include"Animal.h"

using namespace std;

int main()
{
	const double PI = 3.141592;

	cout << "Value = " << PI << endl;

	Animal animal;
	animal.setName("Freddie");
	animal.speak();

	int value = 8;

	//const int *pValue = &value;	// If the int is declared as const then we cannot
									// change the value that we dereference on line 38.

	//int * const pValue = &value;	// If the pointer 'pValue' is declared as const then we cannot
									// redirect the pointer to a new location as on line 35.

	//const int * const pValue = &value;	// This is a combination of both above, meaning you cannot
											// change anything about this pointer. It cannot be redirected
											// and it cannot have a new value reassigned to its mem location
											// through dereferencing.

	int *pValue = &value;			// Standard pointer.

	cout << *pValue << endl;

	int number = 11;

	pValue = &number;		// This is changing(redirecting) the same 'pValue' pointer to point somewhere else.


	*pValue = 12;			// This dereferences the value that is being pointed at and then changes it
							// to 12.



	cout << *pValue << endl;



	return 0;
}


