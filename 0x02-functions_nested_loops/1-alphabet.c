#include "main.h"

/**
 *print_alphabet - prints alphabets in lower case
 *
 * Return:(0) always
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}