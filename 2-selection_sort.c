#include "sort.h"

/**
 * selection_sort - sorting algo selection
 * @array: array to be sorted
 * @size: array size
 * Return: Nothing to return
 */
void selection_sort(int *array, size_t size)
{
unsigned int x = 0;
size_t lp = 0;
size_t lp_2 = 0;
size_t positi = 0;


if (array == NULL || size == 0)
return;
for (; lp < size - 1; lp++)
{
positi = lp;
for (lp_2 = lp + 1; lp_2 < size; lp_2++)
{
if (array[lp_2] < array[positi])
positi = lp_2;
}
if (positi != lp)
{
x = array[lp];
array[lp] = array[positi];
array[positi] = x;
print_array(array, size);
}
}
}
