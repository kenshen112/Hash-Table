/***********************************************
 * HASH.H
 * Author:
 *    Ken, Tim, Jessica
 * Class: cs235
 * instructor Bro Kirby
 * Description:
 *      Declares and defines a hash.
 ***********************************/
#ifndef HASH_H
#define HASH_H

#include "list.h"

template <class T>
class Hash
{

private:
	custom::list<T> hashTable;
	int amount;
	int buckets;

public:
	Hash() 
	{
		
	}

	Hash(int numItems)
	{

	}

	int capacity() const
	{
		return buckets;
	}

	int size()
	{
		return amount;
	}

	bool empty()
	{
		return amount == 0;
	}

	void insert(T item);
	bool find(T item);

	virtual int hash(int item)
	{
		return item;
	}

	~Hash()
	{

	}
};

template <class T>
void Hash<T>::insert(T)
{
	int i = hash(T);
	hashTable[i].insert(T);
}



#endif // SPELL_CHECK_H






