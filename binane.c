#include "main.h"
/**
 * binane - prints unsigned integers to binary
 * @b: unsigned integer input
 * Return: binary value of int
 */
unsigned int binane(unsigned int b)
{
unsigned int count = 0;

if (b <= 0)
{
putinchar('0');
return (1);
}

else if (b == 1)
{
putinchar('1');
return (1);
}
else
{
count += binane(b / 2);
putinchar('0' + (b % 2));
count++;
return (count);
}
}
