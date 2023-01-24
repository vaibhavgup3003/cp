#include <stdio.h>
int main()
{
	int grade;
	printf(" Enter your grade  \n");
	scanf("%d", &grade);
	printf(" You have entered %d as your grade \n", grade);

	switch (grade)
	{
	case 10:
		printf(" You will be topper of the college \n");
		break;
	case 8:
		printf(" You may be the topper of your class \n");
		break;
	case 6:
		printf(" You are just passsed in the exam \n");
		break;
	default:
		printf(" You are passed \n");
	}
}
