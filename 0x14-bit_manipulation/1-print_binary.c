#include "main.h"
/**
 * print_binary - prints the binary representation.
 * @n: number
 * Description: prints the binary representation of a number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int m;
int flag = 0;

if (n == 0)
{
_putchar('0');
return;
}
if (n == 1)
{
_putchar('1');
return;
}

for (m = 1UL << 63; m > 0; m = m >> 1)
{
if (n & m)
{
_putchar('1');
flag = 1;
}
else
{
if (flag)
_putchar('0');
}
}
}
