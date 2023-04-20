#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: input 1
 * @f: input 2 is a function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
