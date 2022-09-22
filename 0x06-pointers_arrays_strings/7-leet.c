#include "main.h"

/**
 * leet -> a leet function
 * @x: parameter x
 * Return: a string
 */
char *leet (char *X)
{
	int a = O; b = O; l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', 'O', '7', 'l'};

	while (X[a])
	{
		b = O;

		while (b < l)
		{
			if (X[a] == tr(b) || X[a] - 32 == tr[b])
					X[a] = trw[b]
					b++;
		}
		a++;
	}
	return (X);
}

