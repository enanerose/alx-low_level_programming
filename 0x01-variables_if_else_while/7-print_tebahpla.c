/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>



int main(void)

{

char letra = 'z';

char retorno = '\n';

while (letra >= 'a')

{

putchar (letra);

letra--;

}

putchar (retorno);

return (0);

}
