#include "main.h"
/**
 * get_bit
 * @n: input
 * * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	return ((n & m) > 0);
}
