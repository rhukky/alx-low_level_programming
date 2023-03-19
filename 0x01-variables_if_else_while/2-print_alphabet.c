#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return:(0) means success
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alpha[n]);
	}
	putchar('\n');
	return (0);
}
