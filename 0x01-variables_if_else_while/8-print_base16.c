#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Printing 16 bit 0-f
 *
 * Return: 0 (success)
*/
int main(void)
{
	char lower_case[16] = "0123456789abcdef";
	int i = 0;

	for (i = 0; i < 16; i++)
	{
	putchar(lower_case[i]);
	}
	putchar('\n');
	return (0);
}
