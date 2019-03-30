/***********************************************************************
 * Module:
 *    Assignment 12, Spell Check
 *    Brother Helfrich, CS 235
 * Author:
 *    <your name here>
 * Summary:
 *    This program will implement the spellCheck() function
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include "spellCheck.h"
#include "hash.h"
using namespace std;

/*****************************************
 * SPELL CHECK
 * Prompt the user for a file to spell-check
 ****************************************/
void spell::spellCheck()
{
	std::cout << "What file do you want to check?\n";
	std::string filename;
	std::cin >> filename;

	//we need to read in the file dictionary first and put that into a hashTable.
	//specifically a hashTable that is derived for strings
	//then we need to check the file the user gives us against the hashTable.
	//so we will need some kind of loop to iterate through the file and use find to check if each word is in the dictionary
	//if that word is not in the dictionary then we need to put it into a special container to be displayed at the end of the compare
	//if it is in the dictionary, I don't think we need to do anything with it.
}
