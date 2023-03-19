#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints single digits using putchar
*
*Return:(0) means success
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
