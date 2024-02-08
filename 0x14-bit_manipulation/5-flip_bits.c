/*
 * File_name: 5-flip_bits.c
 * Created: 7th of April, 2023
 * Auth: David James Taiye
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include "main.h"

/**
 * flip_bits - a function that returns the number of bits.
 * you would like to flip to get from another number.
 * @n: first number to be counted.
 * @m: second number to be counted.
 * Return: 0 if big endian, 1 if little endian.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, flips = 0;
	unsigned long int current;
	unsigned long int ano_num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = ano_num >> i;
		if (current & 1)
			flips++;
	}

	return (flips);
}
