#include "sort.h"



/**
 * sw_nums - swap 2 nums
 * @f_num:first num
 * @s_num:sec num
 * Return: Nothing to return
*/
void sw_nums(int *f_num, int *s_num)
{
int tmp;
tmp = *f_num;
*f_num = *s_num;
*s_num = tmp;
}




/**
 * bubble_sort - array sorting
 * @array: array to be sorted
 * @size: array size
 * Return: Nothing to return
*/

void bubble_sort(int *array, size_t size)
{
size_t lp, lp_1;
for (lp = 0; lp < size; lp++)
{
for (lp_1 = 0; lp_1 < (size - lp - 1); lp_1++)
{
if (array[lp_1 + 1] < array[lp_1])
{
sw_nums(&array[lp_1 + 1], &array[lp_1]);
print_array(array, size);
}
}
}
}
