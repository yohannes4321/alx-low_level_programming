#include<stdio.h>
#include "function_pointers.h"
/**
 * main - print name using pointer funtuiion
 * @f is the pointer funtion 
 */
void print_name(char *name, void (*f)(char *))
{

	if(name ==NULL || f== NULL)
		return;
	f(name);
}
