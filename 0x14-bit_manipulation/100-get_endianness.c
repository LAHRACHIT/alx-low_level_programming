/*
 * Filename : 100-get_endianness.c
 * Created: 7th of April, 2023
 * Auth: David James Taiye
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *j;

	j = (char *) &i;

	return (*j);
}

