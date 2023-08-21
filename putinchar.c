#include "main.h"
/**
 * putinchar - print a character
 * @c: char input
 * Return: 1
 */
int putinchar(char c)
{
return (write(1, &c, 1));
}
