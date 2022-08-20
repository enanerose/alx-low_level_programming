#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * @n: number
 * @index: position
 * Description: sets the value of a bit to 1 at a given index.
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)

{

int mask = 0;

if (index > 64)

return (-1);



mask = 1 << index;

*n = (*n & ~mask) | ((1 << index) & mask);

return (1);

}
