#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c: char
 * @size: size of matrix
 * Description: creates an array of chars.
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)

{

char *arreglo;

unsigned int i;

arreglo =  malloc(size * sizeof(char));



if (size == 0 || arreglo == NULL)

return (NULL);



for (i = 0 ; i < size ; i++)

arreglo[i] = c;



return (arreglo);

}
