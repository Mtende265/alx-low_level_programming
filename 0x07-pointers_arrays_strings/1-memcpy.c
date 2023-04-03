#include "main.h"

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

/*written by Codemonger*/
