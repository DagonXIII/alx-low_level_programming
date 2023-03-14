#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars,
 * initializes it with a specific char.
 * @size: size of array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    char *array;

    if (size == 0)
        return NULL;

    array = malloc(size * sizeof(char));
    if (array == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
        array[i] = c;

    return array;
}
