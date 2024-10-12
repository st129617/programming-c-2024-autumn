#include <iostream>

int main(int argc, char* argv[])
{
	int const N = 1001;
	int array[N] = {};
	int n = 0;
	int max = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		scanf_s("%d", &number);
		array[i] = number;
	}
	array[n] = array[0];
	array[n + 1] = array[1];
	array[n + 2] = array[2];
	for (int i = 0; i < n; ++i)
	{
		if (array[i] + array[i + 1] + array[i + 2] > max)
		{
			max = array[i] + array[i + 1] + array[i + 2];
		}
	}
	printf("%d", max);
	return EXIT_SUCCESS;
}