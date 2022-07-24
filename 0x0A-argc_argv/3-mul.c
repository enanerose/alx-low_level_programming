#include <stdio.h>
#include <stdlib.h>
/**
 * main - main Description
 * @argc : argc contains the number of arguments passed to the program
 * @argv : A vector is a one-dimensional array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int multiplica = 0;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
else
{
multiplica = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multiplica);
return (0);
}
}
