#include <iostream>

int main(int argc, char* argv[])
{
	long long int a = 0;
	long long int b = 0;
	long long int c = 0;
	long long int d = 0;
	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	scanf_s("%lld", &c);
	scanf_s("%lld", &d);
	for (int x = -100; x <= 100; ++x)
	{
		if ((a * x * x * x + b * x * x + c * x + d) == 0)
		{
			printf("%d ", x);
		}
	}
	return EXIT_SUCCESS;
}