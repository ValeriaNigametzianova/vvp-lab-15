#include<stdio.h>

#define MAX(a,b,c) ((a>b) ? ((b>c) ? a + b : a + c) : ((c>a) ?  b + c : a + b))// макрос,возвращающий две наибольших переменных

int main()
{
	int A;
	int B;
	int C;
	printf("enter A, B and C: ");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);
	printf("%d", MAX(A, B, C));
	return 0;
}