#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create array of size size and assign char c.
 * @size: Size of array.
 * @c: Char to assign.
 * Description: Create array of size size and assign char c
 * Return: Pointer to array, NULL if fail.
 */
char *create_array(unsigned int size, char c)
{
	 if (size == 0);
	 {
		 return NULL;
	 }
 char *arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL);
	{
		 return NULL;
	}
	 for (unsigned int i = 0; i < size; ++i)
	 {
		  arr[i] = c;
	 }
	  return arr;
}
