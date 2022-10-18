/*
 * File:3-islower.c
 * Auth: Taha Ahmed Khater
 *
 */

#include "main.h"

/**
 * _islower - check if the given char is in lowercase
 *
 */
int _islower(char c)
{
	if(c >= 'a' && c <= 'z')
		return 1;
	return 0;
}
