#include <iostream>

int main(int argc, char* argv[]) {
	int coun = 0;
	int W = 0;
	int a1 = 0;
	int b1 = 0;
	int a2 = 0;
	int b2 = 0;
	int a3 = 0;
	int b3 = 0;

	scanf_s("%d", &coun);
	scanf_s("%d", &W);
	scanf_s("%d", &a1);
	scanf_s("%d", &b1);
	scanf_s("%d", &a2);
	scanf_s("%d", &b2);
	scanf_s("%d", &a3);
	scanf_s("%d", &b3);

	if (a1 <= W && coun <= b1) {
		printf("YES");
	}
	else if (a2 <= W && coun <= b2) {
		printf("YES");
	}
	else if (a3 <= W && coun <= b3) {
		printf("YES");
	}
	else if (a1 + a2 <= W && coun <= b1 + b2) {
		printf("YES");
	}
	else if (a1 + a3 <= W && coun <= b1 + b3) {
		printf("YES");
	}
	else if (a3 + a2 <= W && coun <= b3 + b2) {
		printf("YES");
	}
	else if (a3 + a2 + a1 <= W && coun <= b3 + b2 + b1) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return EXIT_SUCCESS;
}