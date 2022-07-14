#include "main.h"



/**
 * template - check for word separators
 * @c: character
 * Return: 1 True 0 False
 */



int template(char c)

{

	if (c == ',' || c == ';' || c == '.' || c == '!' ||

		c == '?' || c == '"' || c == '(' || c == ')' ||

		c == '{' || c == '}' || c == ' ' || c == '\t' || c == '\n')

		return (1);

	return (0);

}



/**
 * cap_string - capitalize each word
 * @s: word strring
 *
 * Return: string
 */

char *cap_string(char *s)

{

	int i = 0;



	while (s[i] != '\0')

	{

		if ((s[i] >= 'a' && s[i] <= 'z') && i == 0)

			s[i] = s[i] - 'a' + 'A';



		if ((s[i] >= 'a' && s[i] <= 'z') && template(s[i - 1]))

			s[i] = s[i] - 'a' + 'A';

		i++;

	}



	return (s);

}
