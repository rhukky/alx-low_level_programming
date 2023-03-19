#include <stdio.h>

/**
 * main - prints alphabets in lower and upper case
 *
 * Return:(0) means success
 */

int main(void)
{
	char alphaB[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(alphaB[n]);
	}
	putchar('\n');
	return (0);
}
