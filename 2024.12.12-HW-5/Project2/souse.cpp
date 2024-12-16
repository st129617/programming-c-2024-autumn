#include <iostream>

int main(int argc, int* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	int k = 0;
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	scanf_s("%d", &k);

	for (int i = 0; i < n; ++i) {
		int x = (1000 * n + (i - k)) % n;
		printf("%d ", *(a + x));
	}
	free(a);
	return 0;
}