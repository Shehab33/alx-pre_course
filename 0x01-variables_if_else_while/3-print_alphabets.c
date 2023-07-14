#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Printing alphabet in lowercase and uppercase
 * Main function successfully return 0
*/
int main(void)
{
    char lower_case[26] = "abcdefghijklmnopqrstuvwxyz";
    char upper_case[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i , j = 0;
	for (i=0; i < 26; i++)
	{
	putchar(lower_case[i]);
	}
	for (j=0; j < 26; j++)
	{
	putchar(upper_case[j]);
	}
	putchar('\n');
	return (0);
}
