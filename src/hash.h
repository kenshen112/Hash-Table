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

#include <list>

template <class T>
class Hash
{

private:
    std::list <T> *hashTable;
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
                   hashTable = new std::list<T>[buckets]();
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
}

template <class T>
bool Hash<T>::find(T item)
{

}



#endif // SPELL_CHECK_H






