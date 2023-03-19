#include <stdio.h>
/**
*main - prints alphabet in lower case except q and e
*
*Return:(0) means success
*/

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		putchar('\n');
	}
		return (0);
}
