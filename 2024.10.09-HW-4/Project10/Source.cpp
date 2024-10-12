#include <iostream>

int main(int argc, char* argv[])
{
	int const N = 1010;
	int array[N] = {};
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int t = 0;
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	for (int i = 1; i <= n; ++i)
	{
		array[i] = i;
	}
	while (a < b)
	{
		t = array[a];
		array[a] = array[b];
		array[b] = t;
		++a;
		--b;
	}
	while (c < d)
	{
		t = array[c]; 
		array[c] = array[d];
		array[d] = t;
		c++; d--;
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", array[i]);
	printf("\n");
	return EXIT_SUCCESS;
}