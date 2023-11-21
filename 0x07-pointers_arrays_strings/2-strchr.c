#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: parameter 1 to be checked
 * @c: parameter 2 to be checked
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
