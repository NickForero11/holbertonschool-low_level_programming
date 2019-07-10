#include "holberton.h"
/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: the pointer that will be setted eith the value.
 *
 * @to: the pointer that will be used as value.
 *
 *Return: Always 0(Nothing).
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
