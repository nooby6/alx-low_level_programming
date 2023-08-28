#include "main.h"
#include <unistd.h>
/**
 * * _putchar - writes the char c to stdout
 * @c: Char to print
 * Return: (1) Success
 * Return: (-1) Error. Errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
