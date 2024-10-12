#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int const N = 100;
	int array1[N] = {};
	double array2[N] = {};
	double max = 0;
	int index = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		scanf_s("%d", &number);
		array1[i] = number;
	}
	for (int j = 0; j < n; ++j)
	{
		double number = 0;
		scanf_s("%lf", &number);
		array2[j] = number;
	}
	for (int k = 0; k < n; ++k)
	{
		if ((array1[k] * (array2[k]/100)) > max)
		{
			max = array1[k] * (array2[k] / 100);
		}
	}
	for (int h = 0; h < n; ++h)
	{
		if (((array1[h] * (array2[h] / 100)) == max))
		{
			printf("%d", h + 1);
			return EXIT_SUCCESS;
		}
	}
}