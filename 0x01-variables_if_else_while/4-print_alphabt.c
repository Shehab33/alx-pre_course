#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Printing alphabet in lowercase
 *
 * Return: 0 (success)
*/
int main(void)
{
	char lower_case[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	for (i = 0; i < 24; i++)
	{
	putchar(lower_case[i]);
	}
	putchar('\n');
	return (0);
}
