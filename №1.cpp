#include<stdio.h>
#include<math.h>
#define MAX(a,b) ((a>b) ? a : b) // макрос,возвращающий большую переменную

int main()
{
	int A;
	int B;
	printf("enter A and B: ");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	if (A != B)
		A = B = MAX(A, B);
	else
		A = B = 0;
	printf("New A=%d and B=%d", A, B);
	return 0;
}