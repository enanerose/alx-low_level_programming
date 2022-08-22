#include "main.h"
int _pow(int x, int y);
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1
 * Description: Print elements of a list.
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0, len = 0;
unsigned int number = 0;

if (b == NULL)
return (0);

for ( ; b[i] != '\0'; i++)
len++;

for (i = 0 ; b[i] != '\0'; i++)
{
if (b[i] == '1')
number = _pow(2, ((len - 1) - i)) + number;
else if (b[i] != '0')
return (0);
}
return (number);
}

/**
 * _pow -  Pows a numbe to the x potence
 * @x: base
 * @y: exponent
 * Return: The value
 */
int _pow(int x, int y)
{
int i, r = x;

if (y == 0)
return (1);

for (i = 1; i < y; i++)
r = r * (x + 0);

return (r);
}
