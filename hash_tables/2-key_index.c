#include "hash_tables.h"
/**
 * key_index - index of the key
 * @key: pointer of the key
 * @size: size of the array of the key
 * Return: the index of the key that is stored in the hash table
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	index %= size;

	return(index);

}
