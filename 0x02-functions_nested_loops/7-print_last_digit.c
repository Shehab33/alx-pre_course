#include <stdlib.h>
#include "main.h"
/**
* print_last_digit - prints last digit of any number
* @n: the number argument
* Return: the last digit
*/
int print_last_digit(int n)
{

	int res = abs(n) % 10;

	return (_putchar(res));
}
