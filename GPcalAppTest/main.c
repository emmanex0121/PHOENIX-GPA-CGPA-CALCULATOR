#include <stdio.h>
/*#include "main.h"*/


int GradePointUni(int index);
int TGP(int *arr2, int *arr3, int n);
char Grade_letter(int index);
char *Class_Limits();
int GPAuni(int *arr4, int *arr2, int n);


int main()
{
	int num_course, i;
	int sum_TGP = 0, sum_UNIT = 0;
	float gpa;

	printf("Enter Number of courses: \n");
	scanf("%d", &num_course);

	int arr1[num_course]; /* To hold the Course Grades */
	int arr2[num_course]; /* To hold the Course Units */
	int arr3[num_course]; /* To hold the Course Grade points */
	int arr4[num_course]; /* To hold the Total grade point (TGP) */

	for (i = 0; i < num_course; i++)
	{
		printf("Course %d Grade and unit: \n", i + 1);
		scanf("%d %d", &arr1[i], &arr2[i]);
		arr3[i] = GradePointUni(arr1[i]);
		arr4[i] = arr2[i] * arr3[i]; /* units * Grade Points */

	}

	/*arr4[num_course] = TGPE(&arr2[num_course], &arr3, num_course);*/
	for (i = 0; i < num_course; i++)
	{
		printf("Course %d Grade Points = %d\n", i + 1, arr3[i]);
	}

	for (i = 0; i < num_course; i++)
	{
		printf("Course %d Total Grade points = %d\n", i + 1, arr4[i]);
	}

	for (i = 0; i < num_course; i++)
	{
		sum_TGP += arr4[i];
		sum_UNIT += arr2[i];
	}
	gpa = sum_TGP / sum_UNIT;
	printf("Your GPA is: %f\n", gpa);


	/*gpa = GPAuni(&arr4, &arr2, num_course);
	printf("Your GPA is: %d\n", gpa);*/

	/* *arr4 = TGP(&arr2[num_course], &arr3[num_course], num_course);
	for (i = 0; i < (sizeof(arr4) / sizeof(int)); i++)
	{
		printf("TGPE = %d\n", arr4[i]);
	}*/
}


/**
 * GradePoint - Function that returns the Grade Point of Course Score
 * @index: Value at Course Score current index
 *
 * Return: Grade points for the grades in the array
 */
int GradePointUni(int index)
{
	if (index >= 70 && index <= 100)
		return (5);
	else if (index >= 60 && index < 70)
		return (4);
	else if (index >= 50 && index < 60)
		return (3);
	else if (index >= 45 && index < 50)
		return (2);
	else if (index >= 40 && index < 45)
		return (1);
	else if (index >= 0 && index < 40)
		return (0);
	else
		return ('\0');
}


/**
 * TGP - Function that calculates the Total Grade Points
 * @index: value passed
 */
/*
int TGP(int *arr2, int *arr3, int n)
{
	int i;
	int arr[n];

	for (i = 0; i < n; i++)
	{
		arr[i] = arr2[i] * arr3[i];
	}
	return (*arr);
}
*/



/**
 * GPAuni - Function to calculate GPA
 * @arr4: parameter for TGP array
 * @arr2: Parameter for Grade Units Array
 *
 * Return: The GPA
 */
/*
int GPAuni(int *arr4, int *arr2, int n)
{
	int i, sum_TGP, sum_UNIT, GPA;

	for (i = 0; i < n; i++)
	{
		sum_TGP += arr4[i];
		sum_UNIT += arr2[i];
	}
	GPA = sum_TGP / sum_UNIT;
	return (GPA);
}
*/
