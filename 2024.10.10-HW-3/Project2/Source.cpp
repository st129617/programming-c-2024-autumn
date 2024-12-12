#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	scanf_s("%d", &k);
	for (int i = 0; i < k; ++i)
	{
		int m = 0;
		int n = 0;
		scanf_s("%d", &n);
		scanf_s("%d", &m);
		printf("%d\n", 19*m + (n + 239) * (n + 366) / 2);
	}
	return EXIT_SUCCESS;
}