#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *src, char *dest, unsigned int a)
{
	unsigned int i = 0;

	while (i < a)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

