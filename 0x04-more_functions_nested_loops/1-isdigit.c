#include <ctype.h>
/**
 * _isdigit - is Fn that take char and return 1 when it is digit
 * @c: the int argument of Fn _isdigit
 * Return: 1 (when char is digit) otherwise 0
 */
int _isdigit(int c)
{

	if (isdigit(c))
	{
	return (1);
	}
	return (0);
}
