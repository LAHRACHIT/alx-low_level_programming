/*
 * File_name: 1-print_binary.c
 * Created: 7th of April, 2023
 * Auth: David James Taiye
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted.
 */

#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to print in binary.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int a, print = 0;
	unsigned long int rep;

	for (a = 63; a >= 0; a--)
	{
		rep = n >> a;

		if (rep & 1)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
