#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @r: single letter input
 * Return: 1 if r is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int r)
{
if (((r >= 'a') && (r <= 'z')) || ((r >= 'A') && (r <= 'Z')))
return (1);
else
return (0);
}
