#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @n: bytes of the memory area pointed to by @s
 *
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */

/*written by Codemonger*/

char *_memset(char *s, char b, unsigned int a)
{
	unsigned int i = 0;

	while (i < a)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
