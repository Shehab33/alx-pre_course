#include "main.h"
/**
 * jack_bauer - prints the time from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
	int j = 0;

	while (j < 60)
	{
	_putcahr((i / 10) + '0');
	_putchar((i % 10) + '0');
	_putchar(':');
	_putcahr((j / 10) + '0');
	_putchar((j % 10) + '0');
	j++;
	}
	i++;
	}
}
