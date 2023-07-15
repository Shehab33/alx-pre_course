#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Printing Single numbers[0,1,...,9] using putchar
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + 48);
	}
	printf("\n");
	return (0);
}
