#include "main.h"

/**
 *  * _strlen - returns the length of a string
 *   * @s: string
 *    * Return: length
 *     */

int _strlen(char *s)
{
		int len = 0;

			while (*s != '\0')
					{
								len++;
										s++;
											}

				return (len);
}



char *_strcpy(char *dest, char *src)
{
		int i;

			for (i = 0; i <= _strlen(src); i++)
						dest[i] = src[i];

				return (dest);
}

