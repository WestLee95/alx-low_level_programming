#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return -1; /*Handle NULL array case*/
    }

    /*Recursive approach without for loop*/
    size_t i = 0;
    return (array[i] == value) ? i : (i < size - 1) ? linear_search(array + 1, size - 1, value) : -1;
}
