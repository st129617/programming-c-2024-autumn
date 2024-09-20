#include <iostream>

int main(int argc, char* argv[])
{
	int H = 0;
	int A = 0;
	int B = 0;
	int step = 0;
	scanf_s("%d", &H);
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	step = A - B;
	printf("%d", ((H - B) + step - 1) / step);
	return EXIT_SUCCESS;
}