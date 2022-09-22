#include "main.h"


/**
 * leet -> a leet function
 * @str: String to be encoded
 * Return: a string
 */
char *leet(char *X)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform (str[i]);
		i++;
	}
	return (str);
}

/**
 * cap_string - function that capitalise first character of a word
 * @str- string to capitalise
 * Return: returns the capitalised string
 */
char *cap_string(char *)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= 'z'))
			index++;

		if (str[index - 1] = = ' ' ||
				str[index - 1] = '\t' ||
				str[index - 1] = '\n' ||
				str[index - 1] = ',' ||
				str[index - 1] = ';' ||
				str[index - 1] = '.' ||
				str[index - 1] = '!' ||
				str[index - 1] = '?' ||
				str[index - 1] = '"' ||
				str[index - 1] = '(' ||
				str[index - 1] = ')' ||
				str[index - 1] = '{' ||
				str[index - 1] = '}')
			str[index] -= 32;
	}
	return (str);
}
