#include "main.h"
#define NULL 0

/**
 * _strchr - locate 1st occurrence of char in string and returns pointer there
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if there is a match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}

