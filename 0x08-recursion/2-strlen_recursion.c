#include "holberton.h"
/**
 * _strien_recursion - retuens the length of a string 
 * @s: string to calculate the length of 
 *
 * Return: length of the string 
 */
int _strien_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strien_recursion(s + 1));
}
