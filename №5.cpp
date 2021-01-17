#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int A;
	printf("enter A: ");
	scanf_s("%d", &A);

	if (A > 0)
		printf("положительное ");
	else if (A < 0)
		printf("отрицательное ");
	else
		printf("нулевое ");

	if ((A % 2 == 0) && (A != 0))
		printf("четное ");
	else if ( A != 0)
		printf("нечетное ");
	printf("число");
	return 0;
}