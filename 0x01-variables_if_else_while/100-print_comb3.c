#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints all possible different combinations of two digits.*
*Return:(0) means success
*/

int main(void)
{
	int n, x;

	for (n = '0'; n < '9'; n++)
	{
		for (x = n + 1; x <= '9'; x++)
		{
			if (x != n)
			{
				putchar(n);
				putchar(x);
				if (n == '8' && x == '9')
				{
				continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
