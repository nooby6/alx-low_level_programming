#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: string that contains the binary number
 * Return: converted number (success)
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_val = 0;

	if (!b) /* @b: string containing the binary number */
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[a] - '0');
	}

	return (dec_val); /*  return the converted number */
}
