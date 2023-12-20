#include "sort.h"


/**
* bubble_sort - func that sorts an arr of ints .
* Description : comparing the current element with the one after it
*               swapping their values if needed.
* @array: array of integers.
* @size: size of arr.
*/
void bubble_sort(int *array, size_t size)
{
	size_t counter, i;
	int flag = 0;

	if (!array || !size)
		return;

	for (counter = 0; counter < size - 1; counter++)
	{
		for (i = 0; i < size - 1 - counter; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

/**
* swap - function takes two ints and swap them.
* @firstNum: first number.
* @secondNum: second number.
*/
void swap(int *firstNum, int *secondNum)
{
	int temp;

	temp = *firstNum;
	*firstNum = *secondNum;
	*secondNum = temp;
}
