#include <cmath>
#include <iostream>

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	double x = 0;
	double y = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a == 0 && b == 0 && c == 0) 
	{
		std::cout << -1;
	}
	else if (a == 0) 
	{
		if (b != 0 && c != 0) 
		{
			x = -c / b;
			printf("1\n");
			printf("%lf",x);
		}
		else if (b != 0) 
		{
			printf("1\n");
			printf("%lf", x);
		}
		else 
		{
			printf("0");
			
		}
	}
	else 
	{
		int k = b * b - 4 * a * c;
		if (k < 0) 
		{
			printf("0");
		}
		else if (k == 0) 
		{
			x = -1 * b / (2 * a);
			printf("1\n");
			printf("%lf", x);
		}
		else 
		{
			double d = sqrt(k);
			x = (-1 * b - d) / (2 * a);
			y = (-1 * b + d) / (2 * a);

			printf("2\n");
			if (x > y) 
			{
				printf("%lf\n", y);
				printf("%lf", x);
			}
			else 
			{
				printf("%lf\n", x);
				printf("%lf", y);
			}
			
			
		}
	}
	return EXIT_SUCCESS;
}