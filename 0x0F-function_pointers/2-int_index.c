#include "function_pointers"
/**
 * Prototype: int int_index(int *arr
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if((array && size && cmp) >0)
	{
		for (int i=0 ;i< size ;i++)
		{
			if(cmp(array[i]))
			return (i);
		}
	}
	else 
		return -1;
}


