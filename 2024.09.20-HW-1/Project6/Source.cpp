#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int all = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	all = a + b - 1;
	printf("%d %d", all - a, all - b);
	return EXIT_SUCCESS;
}