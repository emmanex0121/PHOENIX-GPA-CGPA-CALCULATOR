#include <stdio.h>
#include <stdlib.h>


int GradePointUni(int index);
char Grade_letter(int index);
char *Class_Limits();
float GPAuni(int *arr4, int *arr2, int n);


int main()
{
	int num_course, i;
	//int sum_TGP = 0, sum_UNIT = 0;
	float gpa;
	//int *arr4;// = malloc(sizeof(int) * num_course);

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
	
	printf("   Your GPA is: %f   |\n", gpa);
	printf("                           |\n");
	printf("* * * * * ******** * * * * *\n");
	printf("** ** PHOENIX SAYS BYE ** **\n");
	
	
	return (0);

}


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



float GPAuni(int *arr1, int *arr2, int n)
{
	int i;
	float GPA, sum_TGP = 0, sum_UNIT = 0;

	for (i = 0; i < n; i++)
	{
		sum_TGP += arr1[i];
		//printf("current TGP: %d\n", sum_TGP);
		sum_UNIT += arr2[i];
		//printf("current UNIT: %d\n", sum_UNIT);
	}

	GPA = sum_TGP / sum_UNIT;
	return (GPA);
}

