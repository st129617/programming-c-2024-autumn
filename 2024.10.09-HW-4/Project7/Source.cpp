#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 1000;
	int n = 0;
	int array[N] = {};
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		scanf_s("%d", &number);
		array[i] = number;
	}
	for (int j = n - 1; j >= 0; --j)
	{
		printf("%d ", array[j]);
	}
	return EXIT_SUCCESS;
}