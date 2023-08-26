#include "main.h"
/**
 * putsca - prints a pasta string
 * @c: string
 * Return: number of bytes
 */
int putsca(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			putinchar(c[count]);
		}
	}
	return (count);
}
