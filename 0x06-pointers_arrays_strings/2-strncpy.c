#include "main.h"
#include <string.h>

/**
 * _strncpy -> For copying purpose
 * @dest: parameter one
 * @src: parameter 2
 * @n: parameter 3
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncat (dest, src, n);
	return (dest);
}
