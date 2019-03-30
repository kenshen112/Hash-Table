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
	custom::list<T> *hashTable;
	int amount;
	int buckets;

public:
	Hash() 
	{
		hashTable = nullptr;
		buckets = 0;
		amount = 0;
	}

	Hash(int numItems)
	{
		hashTable = nullptr;
		buckets = 0;
		amount = numItems;
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

	virtual int hash(const T & t) const = 0;
	

	~Hash()
	{

	}
};

template <class T>
void Hash<T>::insert(T item)
{
	int i = 0;
	hashTable[i].insert(item);
}

template <class T>
bool Hash<T>::find(T item)
{

}

#endif // SPELL_CHECK_H






