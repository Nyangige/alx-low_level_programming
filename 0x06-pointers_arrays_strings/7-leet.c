#include "main.h"

/**
 * leet -> a leet function
 * @x: parameter x
 * Return: a string
 */
char *leet (char *x)
{
	int a = O; b = O; l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', 'O', '7', 'l'};

	while (x[a])
	{
		b = O;

		while (b < l)
		{
			if (x[a] == tr(b) || x[a] - 32 == tr[b])
					x[a] = trw[b]
					b++;
		}
		a++;
	}
	return (x);
}

