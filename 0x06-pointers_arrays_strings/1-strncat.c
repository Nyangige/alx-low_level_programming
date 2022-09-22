#include "main.h"
#include <string.h>

/**
 * _strncat ->Function to append some charX
 * @dest: First Parameter
 * @src: Second parameter
 * @n: 3rd parameter
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat (dest, src, n);
	return (dest);
}
