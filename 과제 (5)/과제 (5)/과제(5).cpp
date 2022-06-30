//수요일반 219125138 임재원 과제 (5)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ret;
int i;
int array_size1 = 0;
int array_size2 = 0;
int CheckValue(int value);
void GetMax(int* array, int array_size);
void GetMin(int* array, int array_size);
void Sorting(int* array, int array_size);
void GetAverage(int* array, int array_size);

int main(void)
{
	int array1[100];
	printf("값을 입력하세요\n");
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &array1[i]);
		if (array1[i] == -1)
		{
			break;
		}

		CheckValue(array1[i]);
		if (ret == 1)
		{
			array_size1++;
		}
		if (ret == 0)
		{
			i--;
		}
	}

	int array2[100];
	printf("값을 입력하세요\n");
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &array2[i]);
		if (array2[i] == -1)
		{
			break;
		}

		CheckValue(array2[i]);
		if (ret == 1)
		{
			array_size2++;
		}
		if (ret == 0)
		{
			i--;
		}
	}
	
	

	GetMax(array1,array_size1);
	GetMax(array2, array_size2);
	GetMin(array1, array_size1);
	GetMin(array2, array_size2);
	GetAverage(array1, array_size1);
	GetAverage(array2, array_size2);
	Sorting(array1, array_size1);
	Sorting(array2, array_size2);

	return 0;
}

int CheckValue(int value)
{
	if (value > 0 && value < 101)
	{
		ret = 1;
	}
	else if (!(value > 0 && value < 101))
	{
		ret = 0;
		printf("다시 입력하세요\n");
	}
	return ret;
}
void GetMax(int *array,int array_size)
{
	int max = array[0];
	for (i = 1; i < array_size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	printf("최대값 : %d\n", max);
}
void GetMin(int* array, int array_size)
{
	int min = array[0];
	for (i = 1; i < array_size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	printf("최소값 : %d\n", min);
}
void Sorting(int* array, int array_size)
{
	for (int k = 0; k < array_size; k++)
	{
		for (i = 0; i < array_size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
		}
	}
	int mid = 0;
	if (array_size > 2)
	{
		if (array_size % 2 == 1)
		{
			mid = array[array_size / 2 + 1];
		}
		else if (array_size % 2 == 0)
		{
			mid = array[array_size / 2 ];
		}
	}
	printf("중간값 : %d\n", mid);
}
void GetAverage(int* array, int array_size)
{
	int i, sum = 0;
	for (i = 0; i < array_size; i++)
	{
		sum += array[i];
	}
	printf("평균값 : %d\n", sum / array_size);
}