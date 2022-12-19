#include <stdio.h>
#include "main.h"

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
	char *cl_degree;

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
	printf("==== PHOENIX G P A CALC ====\n");

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
	cl_degree = Class_Limits(gpa);

	printf("     Your GPA is: %.2f     |\n", gpa);
	printf("     %*s  |\n", -20, cl_degree);
	printf("                           |\n");
	printf("* * * * * ******** * * * * *\n");
	printf("===** PHOENIX SAYS BYE **===\n");

	return (0);
}
