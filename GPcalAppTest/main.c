#include <stdio.h>
/*#include "main.h"*/


int GradePointUni(int index);
char Grade_letter(int index);
char *Class_Limits(float gpa);
float GPAuni(int *arr4, int *arr2, int n);

/**
 * main - Entry point
 *
 * Description: The program to calculate the GPA of a student
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_course, i;
	float gpa;

	printf("Enter Number of courses: \n");
	scanf("%d", &num_course);

	int C_SCORE[num_course]; /* To hold the Course SCORES */
	int C_UNIT[num_course]; /* To hold the Course Units */
	int COURSE_GP[num_course]; /* To hold the Course Grade points */
	int COURSE_TGP[num_course]; /* To hold the Total grade point (TGP) */

	for (i = 0; i < num_course; i++)
	{
		printf("Course %d Grade and unit: \n", i + 1);
		scanf("%d %d", &C_SCORE[i], &C_UNIT[i]);
		COURSE_GP[i] = GradePointUni(C_SCORE[i]);
		COURSE_TGP[i] = COURSE_GP[i] * C_UNIT[i];
	}
	printf("---------------------------|\n");
	printf("\n");
	printf("**** PHOENIX G P A CALC ****\n");

	printf("* * * * * ******** * * * * *\n");
	printf("                           |\n");

	for (i = 0; i < num_course; i++)
	{
		printf("Course %d Grade Points = %d  |\n", i + 1, COURSE_GP[i]);
	}

	printf("                           |\n");
	printf("* * * * * ******** * * * * *\n");
	printf("                           |\n");

	gpa = GPAuni(COURSE_TGP, C_UNIT, num_course);

	printf("     Your GPA is: %.2f     |\n", gpa);
	printf("                           |\n");
	printf("* * * * * ******** * * * * *\n");
	printf("** ** PHOENIX SAYS BYE ** **\n");


	return (0);

}


/**
 * GradePointUni - Function that returns the Grade Point of Course Score
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
 * GPAuni - Function to calculate GPA
 * @arr1: parameter for TGP array
 * @arr2: Parameter for Grade Units Array
 * @n: Number of courses and array lenght
 *
 * Return: The Grade Point Average (GPA)
 */
float GPAuni(int *arr1, int *arr2, int n)
{
	int i;
	float gpa, sum_TGP = 0, sum_UNIT = 0;

	for (i = 0; i < n; i++)
	{
		sum_TGP += arr1[i];
		sum_UNIT += arr2[i];
	}

	gpa = sum_TGP / sum_UNIT;
	return (gpa);
}

/**
 * Grade_letter - Function that returns the Letter Grade of Course Score
 * @index: Value at Course Score current index
 *
 * Return: Letter Grade for the Score in the array index
 */
char Grade_letter(int index)
{
	if (index >= 70 && index <= 100)
		return ('A');
	else if (index >= 60 && index < 70)
		return ('B');
	else if (index >= 50 && index < 60)
		return ('C');
	else if (index >= 45 && index < 50)
		return ('D');
	else if (index >= 40 && index < 45)
		return ('E');
	else if (index >= 0 && index < 40)
		return ('F');
	else
		return ('\0');
}

/**
 * Class_Limits - Function that returns the Letter Grade of Course Score
 * @gpa: Current Grade Points Average
 *
 * Return: Class of the degree of the GPA
 */
char *Class_Limits(float gpa)
{
	if (gpa >= 0.00 && gpa <= 5.00)
	{
		if (gpa >= 4.50)
			return ("1st CLASS");
		else if (gpa >= 3.50 && gpa < 4.50)
			return ("2nd CLASS UPPER");
		else if (gpa >= 2.49 && gpa < 3.50)
			return ("2nd CLASS LOWER");
		else if (gpa >= 1.50 && gpa < 2.49)
			return ("3nd CLASS");
		else if (gpa >= 1.00 && gpa < 1.50)
			return ("GOOD STANDING");
		else
			return ("ADVISED TO WITHDRAW");
	}
	else
		return ("INVALID GPA");
}
