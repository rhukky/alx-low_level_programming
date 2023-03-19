#include <stdio.h>
/**
*main - prints alphabet in lower case except q and e
*
*Return:(0) means success
*/

int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != e && i != q)
			putchar(i);
	putchar('\n');
	}
	return (0);
}
