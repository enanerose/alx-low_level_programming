/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>



int main(void)

{

char letra = 'a';

char retorno = '\n';

while (letra <= 'z')

{

if (letra != 'q' && letra != 'e')

{

putchar (letra);

}

letra++;

}

putchar (retorno);

return (0);

}
