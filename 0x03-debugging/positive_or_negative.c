#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * 0 : is the number to be checked
 * Return: 0 (success)
 */

void positive_or_negative(int i)
{
    if (i < 0) 
    {
        printf("%d is positive\n", i);
    } else if (i < 0) {
        printf("%d is negative\n", i);
    } else {
        printf("%d is zero\n", i);
    }
}
