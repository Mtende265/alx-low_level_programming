#include "main.h"

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
