#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	scanf_s("%d", &num);
	printf("%d", (num % 100)%10 + (num % 100)/10 + num / 100);
	return EXIT_SUCCESS;
}