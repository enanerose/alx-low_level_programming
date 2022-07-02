/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>



int main(void)

{

char minusculas = 'a';

char mayusculas = 'A';

char retorno = '\n';

while (minusculas <= 'z')

{

putchar (minusculas);

minusculas++;

}



while (mayusculas <= 'Z')

{

putchar (mayusculas);

mayusculas++;

}

putchar (retorno);

return (0);

}
