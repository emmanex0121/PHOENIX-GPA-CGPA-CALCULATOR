#include <stdio.h>
/*#include "main.h"*/


int GradePointUni(int *arr, int size);



int main()
{
	int a, b, n, i;

	printf("Enter Number of courses: \n");
	scanf("%d", &n);

	int arr1[n]; /* To hold the Course Grades */
	int arr2[n]; /* To hold the Course Units */
	int arr3[n]; /* To hold the Course Grade points */

	for (i = 0; i < n; i++)
	{
		printf("Course %d Grade and unit: \n", i + 1);
		scanf("%d %d", &arr1[i], &arr2[i]);
		arr3[i] = GradePointUni(&arr1[i], n);

	}
	/*printf("array = %d score, %d unit", arr1[n - 1], arr2[n - 1]); */
	for (i = 0; i < n; i++)
	{
		printf("Grade Points = %d\n", arr3[i + 1]);
	}

}


/**
 * GradePoint - Function that returns the weighted grade
 * @arr[x]: array holding Grades of Courses
 * @x: Number of courses to be asseses Also Array lenght
 *
 * Return: Grade points for the grades in the array
 */
int GradePointUni(int *arr, int size)
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		if (arr[i] >= 70 && arr[i] <= 100)
			return (5);
		else if (arr[i] >= 60 && arr[i] < 70)
			return (4);
		else if (arr[i] >= 50 && arr[i] < 60)
			return (3);
		else if (arr[i] >= 45 && arr[i] < 50)
			return (2);
		else if (arr[i] >= 40 && arr[i] < 45)
			return (1);
		else if (arr[i] >= 0 && arr[i] < 40)
			return (0);
		else
			return ('\0');
	}
}


/**
 */
