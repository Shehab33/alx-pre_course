#include <ctype.h>
/**
 * _islower - is Fn that take char and return 1 when it is lowercase or Uppercase
 * @c: the int argument of Fn _isalpha
 * Return: 1 (when char is lowercase or uppercase) otherwise 0
 */
int _isalpha(int c)
{

	if (islower(c) || isupper(c))
	{
	return (1);
	}
	return (0);
}
