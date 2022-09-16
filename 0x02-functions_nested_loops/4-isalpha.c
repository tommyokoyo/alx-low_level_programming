#include <unistd.h>
#inlcude "holberton.h"

/**
 * _isalpha - checks whether the passed charatcer is an alphabet (A-Z or a-z)
 * @C: The character to check
 *
 * Return: 1 if c is an alphabet, otherwise Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}