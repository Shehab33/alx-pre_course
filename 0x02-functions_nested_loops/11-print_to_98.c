#include <stdio.h>
/**
 * print_to_98 - prints from any number to 98
 * @n: the nuber which we will starts with
 * Return: void
 */
void print_to_98(int n)
{

	if (n <= 0)
	{
	while (n <= 98)
	{
	printf("%d",n);
	n++;
	printf(",");
	printf(" ");
	}
	}else if (n >= 98)
	{
	while (n >= 98)
	{
	printf("%d",n);
	n--;
	printf(",");
	printf(" ");
	}
	}
	printf("\n");
}
