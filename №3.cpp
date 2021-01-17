#include<stdio.h>
#include<math.h>

#define MIN(a,b) ( a < b ? a : b) //для нахождения минимума

int main()
{
	int x1, y1;
	int x2, y2;
	int x3, y3;
	printf("enter A: "); 
	scanf_s("%d %d", &x1, &y1);
	printf("enter B: ");
	scanf_s("%d %d", &x2, &y2);
	printf("enter C: ");
	scanf_s("%d %d", &x3, &y3);
	
	printf("%d", MIN(vector(x1, x2, y1, y2), vector(x1, x3, y1, y3))); //выводим меньшее из расстояний
	return 0;
}

int vector(int x,int y,int z,int k)//вычисляет расстояние между двумя точками
{
	int v = sqrt((y - x) * (y - x) + (z - k) * (z - k));
	return v;
}