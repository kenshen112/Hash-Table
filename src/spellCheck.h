/***********************************************************************
 * Module:
 *    Assignment 12, Spell Check
 *    Brother Helfrich, CS 235
 * Author:
 *    Br. Helfrich
 * Summary:
 *    This program will implement the spellCheck() function
 ************************************************************************/
#include <iostream>
#include <string>
#include "hash.h"


#ifndef SPELL_CHECK_H
#define SPELL_CHECK_H
template <class T>
class sHash: public Hash<T>
{
public: 
	int hash(const std::string & item)
	{		      
		int sum = 0;
		for (int k = 0; k < item.length(); k++)
			sum = sum + int(item[k]);
		return  sum % Hash<T>::size();
	}

};


void spellCheck();

#endif // SPELL_CHECK_H
