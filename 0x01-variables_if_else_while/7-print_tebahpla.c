#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Printing alphabet in lowercase-reverse
 *
 * Return: 0 (success)
*/
int main(void)
{
	char lower_case[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	for (i = 0; i < 26; i++)
	{
	putchar(lower_case[i]);
	}
	putchar('\n');
	return (0);
}
