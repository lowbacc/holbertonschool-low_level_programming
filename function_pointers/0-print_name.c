#include <stddef.h>
#include "function_pointers.h"


/**
 * print_name - Entry point
 * @name: name
 * @f: function
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
