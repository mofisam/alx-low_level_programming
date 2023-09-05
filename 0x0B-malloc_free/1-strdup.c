#include <stdlib.h>
#include "main.h"
/**
 * *_strdup -  function returns a pointer to a newly allocated space in memory
 * @str: new string
 * Return: returns a pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;
	s = (cha *) malloc((a + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (b = 0; b < a ; b++)
		s[b] = str[b];

	s[a + 1] = '\0';
	return (s);
}
