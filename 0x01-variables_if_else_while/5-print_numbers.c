#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints all single digit numbers of base 10 starting from 0
*
*Return:(0) means success
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf(" %d\n", n);
	}
	return (0);
}