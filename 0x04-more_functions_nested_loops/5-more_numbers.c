#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers 0-14_10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n = 0;

	while ( n < 10)
	{
	int i = 0;

	while (i < 15)
	{
	printf("%d", i);
	i++;
	}
	printf("\n");
	n++;
	}
}
