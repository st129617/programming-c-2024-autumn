#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int const N = 1000;
	int array[N] = {};
	int m = 0;
	int t1 = 0;
	int t2 = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		scanf_s("%d", &number);
		array[i] = number;
	}
	scanf_s("%d", &m);
	for (int j = 0; j < m; ++j)
	{
		scanf_s("%d %d", &t1, &t2);
		for (int k = t1 - 1; k < t2; ++k)
		{
			printf("%d ", array[k]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}