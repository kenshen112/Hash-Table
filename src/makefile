###############################################################
# Program:
#     Assignment 12, Hash
#     Brother Kirby, CS235
# Author:
#     	Ken Smith
#	Jessica Smith
# 	Tim O'Barr
#Programming Time:
#	Paired: 4 hours
#	Jessica: 8 hours
#	Ken: 1 hour
#	Tim: 6 hours
#Difficulties:
#	Jessica: we had compiler issues that I got stuck on. 
#	Ken: Working on homework while on a plane.
#	Tim: Trying to get insert to work correctly.
# Summary:
#     This is a program that uses our (somewhat flawed) list from week07
# to use for the hash function. We use a hash table to store a dictionary
# which we then compare a file with the dictionary to see if there are any 
# words that are misspelled. The word is considered misspelled when it is not
# found in the dictionary hash table.
###############################################################

##############################################################
# The main rule
##############################################################
a.out: assignment12.o spellCheck.o
	g++ -o a.out assignment12.o spellCheck.o -g -std=c++11
	tar -cf assignment12.tar *.h *.cpp makefile

##############################################################
# The individual components
#      assignment12.o     : the driver program
#      spellCheck.o       : the spell-check program and driver
##############################################################
assignment12.o: hash.h assignment12.cpp list.h
	g++ -c assignment12.cpp -g -std=c++11

spellCheck.o: hash.h spellCheck.h spellCheck.cpp
	g++ -c spellCheck.cpp -g -std=c++11

