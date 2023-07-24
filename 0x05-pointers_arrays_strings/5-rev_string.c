#include "main.h"
#include <stdio.h>
/**
 * rev_string - Fn that prints reversed string
 * @s: the string that wil reversed
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
	count++;
	}
	for (i = 0; i < count; i++)
	{
	count--;
	rev = s[i];
	s[i] = s[count];
	s[count] = rev;
	}
}
