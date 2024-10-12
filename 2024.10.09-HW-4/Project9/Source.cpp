#include <iostream>

int main(int argc, char* argv[])
{
	const int N = 100;
	int n = 0;
	int array[N] = {};
	int x = 0;
	int count = 1;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		scanf_s("%d", &number);
		array[i] = number;
	}
	scanf_s("%d", &x);
	for (int i = 0; i <= n; ++i)
	{
		if (array[i] >= x)
		{
			++count;
		}
	}
	printf("%d", count);
	return EXIT_SUCCESS;
}