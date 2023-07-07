#include "hash_tables.h"
/**
 * key_index - Entry Function
 * @size: unsigned long int
 * @key: const unsigned char
 * Return: idx
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_v;
unsigned long int idx;
hash_v = hash_djb2(key);
idx = hash_v % size;
return (idx);
}
