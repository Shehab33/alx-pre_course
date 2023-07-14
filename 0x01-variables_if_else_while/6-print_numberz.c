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
	char num[10] = "0123456789";
	int i = 0;

	while (i < 10)
	{
	putchar(num[i]);
	i++;
	}
	printf("\n");
	return (0);
}
