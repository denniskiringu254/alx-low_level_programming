#include "main.h"
#define NULL 0

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0') /*iterate through string*/
	{

		for (j = 0; accept[j] != '\0'; j++) /* iterate */
		{
			if (s[i] == accept[j]) /* stop at first match */
			{
				s = &s[i]; 				return (s);
			}
		}
		i++;
	}
	return (NULL); /* if no match therefore return NULL*/

}
