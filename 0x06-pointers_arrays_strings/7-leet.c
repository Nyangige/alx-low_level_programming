#include "main.h"

/**
 * leet -> a leet function
 * @X: parameter X
 * Return: a string
 */
char *leet(char *X)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (X[a])
	{
		b = O;

		while (b < l)
		{
			if (X[a] == tr(b) || X[a] - 32 == tr[b])
				X[a] = trw[b];
			b++;
		}
		a++;
	}
	return (X);
}
