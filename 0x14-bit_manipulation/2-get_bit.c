/*
 * File_name: 2-get_bit.c
 * Created: 7th of April, 2023
 * Auth: David James Taiye
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}

