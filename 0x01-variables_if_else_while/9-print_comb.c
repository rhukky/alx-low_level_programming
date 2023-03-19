#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints number and puts ; and space after each
*
*Return:(0) means success
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
