#include "main.h"
#include <string.h>

/**
 * string_toupper -> converts any string to upper case
 * @X: Parameter X
 * Return: string
 */
char *string_toupper(char *X)
{
	int i = 0;

	while (X[i])
	{
		if (X[i] >= 97 && X[i] <= 122)
			X[i] = X[i] - 32;
		i++;
	}
	return (X);
}
