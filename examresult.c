#include<stdio.h>

#define PASSLIMIT 32

int main()
{
	char name[35];
	int Physics = 0,
		Chemistry = 0, Biology = 0,
		English = 0, Mathematics = 0;

	int TotalMarks = 0;

	float GPA = 0.00;

	printf("Enter a name: ");
	get(name, sizeof (name));
	printf("\n");

	printf("Enter the marks of Physics: ");
	scanf("%d", &Physics);

	printf("Enter the marks of Chemistry: ");
	scanf("%d", &Chemistry);

	printf("Enter the marks of Biology: ");
	scanf("%d", &Biology);

	printf("Enter the marks of English: ");
	scanf("%d", &English);

	printf("Enter the marks of Mathematics: ");
	scanf("%d", &Mathematics);

	if (Physics < PASSLIMIT || Chemistry < PASSLIMIT ||
		Biology < PASSLIMIT || English < PASSLIMIT || Mathematics < PASSLIMIT)
	{
		printf("%s has failed in one or more subjects.\n", name);
		printf("Result: Fail\n");
	}
	else
	{
		TotalMarks = Physics + Chemistry + Biology + English + Mathematics;

		GPA = ((float)TotalMarks / 500) * 4;

		printf("\n%s have achieved total marks of %d and GPA of %.2f.\n", name, TotalMarks, GPA);
	}

	return 0;
}