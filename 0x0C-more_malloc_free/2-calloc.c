#include <stdlib.h>
#include "main.h"

/**
 * _calloc - sets memory to zero and also allocate memory 
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0) /* validate input */
		return (NULL);

	/* check error and allocate memory  */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* allocated memory values are set to 0 */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0; /* type cast assigning values*/

	return (ptr);
}
