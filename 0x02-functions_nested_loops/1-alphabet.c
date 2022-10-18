/*
 * File: 1-alphabet.c
 * Auth: Taha Ahmed Khater
 *
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}