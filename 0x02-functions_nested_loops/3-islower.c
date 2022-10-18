/*
 * File:3-islower.c
 * Auth: Taha Ahmed Khater
 *
 */

#include "main.h"

/**
 * _islower - check if the given char is in lowercase
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
