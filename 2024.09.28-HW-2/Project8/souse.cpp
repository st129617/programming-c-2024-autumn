#include <iostream>

int main() {
	int n = 0;
	int m = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	if (n < m) {
		int c = m;
		m = n;
		n = c;
	}
	if (n == 1 || m == 1) {
		printf("%d\n", n * m * 4);
	}
	else {
		int res = (m + 2) * n + m * (n + 2);
		if (n % 2 == 1 && m % 2 == 1) {
			res -= 2;
		}
		printf("%d\n", res);
	}
	return EXIT_SUCCESS;
}