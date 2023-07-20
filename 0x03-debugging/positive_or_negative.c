#include "main.h"
/**
* positive_or_negative  - Positive-Negative Problem
*@i: the argument of Fn
* Return: Always 0 (success)
*/
void positive_or_negative(int i)
{

	if (i == 0)
	printf("%d is zero\n", i);
	if (i > 0)
	printf("%d is positive\n", i);
	else
	if (i < 0)
	printf("%d is negative\n", i);
}
