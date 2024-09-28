#include <iostream>

int main(int argc, char* argv[]) {
	int X = 0;
	int Y = 0;
	scanf_s("%d", &X);
	scanf_s("%d", &Y);
	if (X == 1 && Y == 1) {
		printf("0");
	}
	else if (X != Y) {
		printf("1");
	}
	else {
		printf("2");
	}
	return EXIT_SUCCESS;
}