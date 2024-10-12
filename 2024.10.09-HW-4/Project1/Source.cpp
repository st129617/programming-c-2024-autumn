#include <iostream>

int main(int argc, char* [])
{
	int n = 0;
	int value = 0;
	int count = 0;
	int const LENGTH = 1000;
	int static_array[LENGTH] = {};
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int num = 0;
		scanf_s("%d", &num);
		static_array[i] = num;
	}
	scanf_s("%d", &value);
	for (int i = 0; i < n; ++i)
	{
		if (static_array[i] == value)
		{
			count += 1;
		}
	}
	printf("%d", count);
	return EXIT_SUCCESS;
}