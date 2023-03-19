#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main -prints 3 different numbers
*
*Return:(0) means success
*/

int main(void)
{
	int n, x, y;

	for (n = '0'; n < '9'; n++)
	{
		for (x = n + 1; x <= '9'; x++)
		{
			for (y = x + 1; y <= '9'; y++)
			{
				if ((n != x) != y)
				{
					putchar(n);
					putchar(x);
					putchar(y);
					if (n == '7' && x == '8')
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
