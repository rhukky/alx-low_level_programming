#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints lower case from z to a
*
*Return:(0) means success
*/

int main(void)
{
	char fromZ[26] = "zyxwvutsrqponmlkjihgfedcba";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(fromZ[n]);
	}
	putchar('\n');
	return (0);
}
