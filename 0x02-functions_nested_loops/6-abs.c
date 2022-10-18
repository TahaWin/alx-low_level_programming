/*
 * File: 6-abs.c
 * Auth: Taha Ahmed Khater
 *
 */

#include "main.h"

/**
 * absolute - computes the absolute
 * @n: The number of which the absolute value will be computed.
 *
 * Return: the absolute of un integer */
int _abs(int n)
{

	if (n < 0)
		n *= -1;
	
	return (n);
}
