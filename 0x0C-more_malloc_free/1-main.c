#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * alx.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat(NULL, "School !!!! ", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
