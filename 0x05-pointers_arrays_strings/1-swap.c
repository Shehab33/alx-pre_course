#include "main.h"
#include<stdio.h>
/**
 * swap_int - Fn that swap two integers values
 * @a: ointer to the first number
 * @b: pointer to the second number
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
