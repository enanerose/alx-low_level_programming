#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Main Description
 * @argc : argc contains the number of arguments passed to the program
 * @argv : A vector is a one-dimensional array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, arg, suma = 0;

for (i = 1 ; i < argc ; i++)
{
for (arg = 0 ; argv[i][arg] != '\0' ; arg++)
{
if (isdigit(argv[i][arg]))
{
;
}
else
{
printf("Error\n");
return (1);
}
}
suma += atoi(argv[i]);
}
printf("%d\n", suma);
return (0);
}
