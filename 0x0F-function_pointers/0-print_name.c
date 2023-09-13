#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
