#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int const N = 1001;
	int array[N] = {};
	int n = 0;
	int res = 0;
	int answer = 0;
	int max = 0;
	int minimum_dif = 1001;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		scanf_s("%d", &number);
		array[i] = number;
	}
	scanf_s("%d", &res);
	int k = array[0];
	for (int j = 0; j < n; ++j)
	{
		if ((abs(array[j] - res) < abs(k - res) || abs(array[j] - res) == abs(k - res) && array[j] < k))
		{
			k = array[j];
		}
	}
	printf("%d", k);
	return EXIT_SUCCESS;
}