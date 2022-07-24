#include <stdio.h>

/**
 * main - print all arguments receives
 * @argc : argc contains the number of arguments passed to the program
 * @argv : A vector is a one-dimensional array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for ( ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
