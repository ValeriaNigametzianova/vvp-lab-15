#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int A;
	printf("enter A: ");
	scanf_s("%d", &A);

	if (A > 0)
	{
		if (A % 2 == 0)
			printf("четное ");
		else
			printf("нечетное ");


		int count = 0;//переменная-счетчик
		while (A > 0)
		{
			A = A / 10;
			count += 1;
		}
		if (count  == 1)
			printf("однозначное");
		else if (count == 2)
			printf("двузначное ");
		else
			printf("трехзначное ");
	}
	else
		printf("A is in 1-999");
	return 0;
}