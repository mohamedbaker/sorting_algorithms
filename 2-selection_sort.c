#include "sort.h"


/**
* selection_sort - function sorting arr.
* Description: by selecting min value and swapping it to first of arr.
* @array: array of ints.
* @size: arr size.
* Return: sorted array.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, minPos;

	for (i = 0; i < size - 1; i++)
	{
		minPos = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minPos])
				minPos = j;
		}
		if (minPos != i)
		{
			swap(&array[i], &array[minPos]);
			print_array(array, size);
		}
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
