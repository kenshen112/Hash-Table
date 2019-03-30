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
    custom::list <T> *hashTable;
	int amount;
	int buckets;

public:
	Hash() 
	{
		hashTable = nullptr;
		buckets = 0;
		amount = 0;
	}

	Hash(int numBuckets)
	{
		hashTable = nullptr;
		buckets = numBuckets;
		amount = 0;

                try
                {
                   hashTable = new custom::list<T>[buckets]();
                }
                catch(std::bad_alloc)
                {
                   throw "Error: unable to allocate space for a new list\n";
                }
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
   int i = hash(item);

   hashTable[i].push_back(item);
   amount++;
}

template <class T>
bool Hash<T>::find(T item)
{
	bool isFound = 0;
	int bucket = 0;

	while (isFound != 1)
	{
		if (hashTable[bucket].find(item))
		{
			isFound = 1;
		}

		else
		{
			bucket++;
		}

	}

}



#endif // SPELL_CHECK_H






