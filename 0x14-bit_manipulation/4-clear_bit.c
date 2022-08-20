/**
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: index
 * Description: sets the value of a bit to 0
 * Return: value of a bit
 */

int clear_bit(unsigned long int *n, unsigned int index)

{

int mask = 0;



if (index > 64)

return (-1);



mask =  1 << index;

*n = (*n & ~mask) | ((0 << index) & mask);



return (1);

}
