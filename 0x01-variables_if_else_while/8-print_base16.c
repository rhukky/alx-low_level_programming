#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints all numbers in base 16
*
*Return:(0) means success
*/

int main(void)
{
	char last6;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (last6 = 'a'; last6 <= 'f'; last6++)
	{
		putchar(last6);
	}
	putchar('\n');
	return (0);
}
