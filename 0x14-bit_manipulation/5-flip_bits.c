#include "main.h"

unsigned int numerobits(unsigned long n);

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: number a
 * @m: number b
 * Description: returns the number of bits you would need to flip
 * Return: number of bits
 */



unsigned int flip_bits(unsigned long int n, unsigned long int m)

{

unsigned int b;

if (n == m)

return (0);



b = numerobits(n ^ m);

return (b);

}



/**
 * numerobits - count number of bits
 * @p: number
 * Description: count number of bits
 * Return: int
 */

unsigned int numerobits(unsigned long p)

{

unsigned int c = 0;

while (p)

{

c += p & 1;

p >>= 1;

}

return (c);

}
