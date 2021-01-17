#include<stdio.h>

int main()
{
	int x;
	int y;
	printf("enter x and y: ");
	scanf_s("%d %d", &x, &y);

	if (x > 0)
	{
		if (y > 0)
		{
			printf("1 quarter");
		}
		else if ( y < 0 )
		{
			printf("4 quarter");
		}
	else if ( x < 0 )
	{
		if (y > 0)
		{
			printf("2 quarter");
		}
		else if (y < 0)
		{
			printf("3 quarter");
		}
	}
	else
		{
			printf("x and y not equal 0");
		}
	}
	return 0;
}

