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
	int i = 48;
	int comma = 44;
	int space = 32;

	while (i < 58)
	{
	putchar(i);
	i++;
	if (i != 57)
	{
	putchar(comma);
	putchar(space);
	}
	}
	printf("\n");
	return (0);
}
