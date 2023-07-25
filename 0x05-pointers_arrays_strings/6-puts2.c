#include "main.h"
#include<stdio.h>
/**
 * puts2 - Fn that only prints half of string 
 * @str: the pointer that has the string values
 * Return: void
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
	if (*str % 2 == 0){
	_putchar(*str);
	}
	++str;
	}
	_putchar('\n');
}
