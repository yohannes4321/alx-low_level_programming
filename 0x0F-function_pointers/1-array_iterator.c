#include <stdio.h>
#include "function_pointers.h"
/**
 * mian - function itrator
 * size
 * action is pinter function you goan use is the fubnction 
 * return nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int size_t;
	if (array == NULL ||action NULL)
		return ;
	for (int i=0; i< size_t; i++)
	{
		action(array[i]);
	}

}
