#include "main.h"

/**
 * reverse_array - reverse array elements
 * @n: the number of elements in that array
 */

void reverse_array(int *a, int n)
{

	int tmp, beg = 0;
	int end = n - 1; /* excempt the null terminator */

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}
