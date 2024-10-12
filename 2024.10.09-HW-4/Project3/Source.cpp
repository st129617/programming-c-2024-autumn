#include <iostream>

int main(int argc, char* argv[])
{
	int const N = 1001;
	int array[N] = {};
	int n = 0;
	int minimum = 1001;
	int maximum = -1001;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		scanf_s("%d", &number);
		array[i] = number;
	}
	for (int j = 0; j < n; ++j)
	{
		if (array[j] > maximum)
		{
			maximum = array[j];
		}
		if (array[j] < minimum)
		{
			minimum = array[j];
		}
	}
	for (int k = 0; k < n; ++k)
	{
		if (array[k] == maximum)
		{
			array[k] = minimum;
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", array[i]);
	}
	return EXIT_SUCCESS;
}