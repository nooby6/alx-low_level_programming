#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: 1 (success)
 * Return: -1 (error)
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
