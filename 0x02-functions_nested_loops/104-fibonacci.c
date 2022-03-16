#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - print first 98 Fibonacci numbers without using long long, malloc,
 * pointers, array/tables, or structures
 * Return: 0
 */

int main(void)
{
	int counter, overflow;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	printf("1");

	for (counter = 2; counter < 93; counter++) /* will still print */
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

