/*
 * File: 2-print_alphabet_x10.c
 * Auth: Taha Ahmed Khater
 *
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times, 
 * followed by a new line
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char c;
	
	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}

}