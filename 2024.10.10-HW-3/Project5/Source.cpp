#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int count_ways = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int k = 0;
			scanf_s("%d", &k);
			if (k == 1) {
				count_ways += 1;
			}
		}
	}
	printf("%d", count_ways/2);
	return EXIT_SUCCESS;
}