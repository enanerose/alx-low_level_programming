#include "main.h"



/**
 * string_toupper - convert to uppercase
 * @k: char pointer
 *
 * Return: char pointer
 */



char *string_toupper(char *k)

{

	int i, x;



	for (i = 0; k[i] != '\0'; i++)

	{

		x = k[i] >= 'a' && k[i] <= 'z' ? k[i] - 'a' + 'A' : k[i];

		k[i] = x;

	}



	return (k);

}
