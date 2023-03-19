#include <stdio.h>
/**
*main - prints alphabet in lower case except q and e
*
*Return:(0) means success
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	}
	return (0);
}
