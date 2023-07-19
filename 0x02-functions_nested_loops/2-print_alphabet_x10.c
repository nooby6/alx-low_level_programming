#include "main.h"

/**
 *print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 *followed by a new line
 */

void print_alphabet_x10(void)
{
	char al;
	int j;

	j = 0;

	while (j < 10)
	{
		al = 'a';
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
		j++;
	}
}
