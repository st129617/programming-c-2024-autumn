#include<iostream>

int main(int argc, int* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", (a + i));
		if (*(a + i) < *(a + m)) { m = i; }
	}
	for (int i = m; i < n; i++) 
	{ 
		printf("%d ", *(a + i)); 
	}
	for (int i = 0; i < m; i++) 
	{ 
		printf("%d ", *(a + i)); 
	}
	free(a);
}