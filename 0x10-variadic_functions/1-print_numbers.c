
Muizzyranking
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x10-variadic_functions/1-print_numbers.c
@Muizzyranking
Muizzyranking 0x10. C - Variadic functions
 1 contributor
29 lines (23 sloc)  618 Bytes
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

