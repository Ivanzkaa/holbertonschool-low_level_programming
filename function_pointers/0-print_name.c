#include "function_pointers.h"
/**
 * print_name - printing the name
 * @name: we gotta print this name
 * @f: function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
