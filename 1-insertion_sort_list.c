#include "sort.h"
/**
* insertion_sort_list - inserting of a sorting algorithm
* @list: list
*Return: nothing to return
*/






void insertion_sort_list(listint_t **list)
{
listint_t *tmps;
unsigned int num;

if (!list)
return;
tmps = *list;
while (tmps)
{
while (tmps)
{
if (tmps->next)
{
if (tmps->n > tmps->next->n)
{
num = tmps->n;
*(int *)&tmps->n = tmps->next->n;
*(int *)&tmps->next->n = num;
tmps = *list;
print_list(*list);
break;
}
}
tmps = tmps->next;
}
}
}
