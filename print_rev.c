#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
*print_rev - prints astring in reverse
*@r: string to print
*Return: number of chars printed
*/

/**
int print_rev(va_list r,flags_t *f)
{
	char *st;
	int i, j = 0;
	f = f;

 st = va_arg(r, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++);
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}
*/


/**
 * print_rev - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rev(va_list l, flags_t *f)
{
int i = 0, j;
char *s = va_arg(l, char *);

(void)f;
if (!s)
s = "(null)";

while (s[i])
i++;

for (j = i - 1; j >= 0; j--)
_putchar(s[j]);
return (i);
}

