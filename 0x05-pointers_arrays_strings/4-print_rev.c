#include "main.h"
#include <stdio.h>
/**
 * print_rev - Fn that prints reversed string
 * @s: the string that wil reversed
 * Return: void
 */
void print_rev(char *s)
{
	int strL = 0;
	int i;

	while (*s != '\0')
	{
	strL++;
	s++;
	}
	s--;
	for (i = strL; i > 0; i--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
