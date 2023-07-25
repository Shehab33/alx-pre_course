#include "main.h"
#include<stdio.h>
/**
 * puts_half - Fn that only prints half of string 
 * @str: the pointer that has the string values
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
	n++;
	str++;
	}

	printf("%d", n);

	for (n = n-1/2;  str[n] != '\0'; n++)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
}
