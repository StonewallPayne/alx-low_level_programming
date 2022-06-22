#include "main.h"

/**
 * _puts_recursion -> this is a function to print string recursivly
 * @s: string paramenter
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
