#include <stdlib.h>
#include "main.h"
/**
* print_last_digit - prints last digit of any number
* @n: the number argument
* Return: the last digit
*/
int print_last_digit(int n)
{

	int res = n % 10;

	if (res < 0)
	{
	_putchar(-res + 48);
	return (-res);
	}
	else
	{
	_putchar(res + 48);
	return (res);
	}
}
