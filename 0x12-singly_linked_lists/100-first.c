#include <stdio.h>

/**
 * __start - execute before main
 * Description: execute before main
 * Return: Nothing
 */

void __start(void) __attribute__((constructor));



void __start(void)

{

printf("You're beat! and yet, you must allow,\n");

printf("I bore my house upon my back!\n");

}
