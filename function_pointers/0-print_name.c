#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

