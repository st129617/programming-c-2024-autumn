#include <iostream>

int main(int argc, int* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int s = 0;
	for (int i = 0; i < n; ++i) {
		int mx = -9999999;
		for (int j = i; j < n; ++j) {
			if (*(a + j) > mx) {
				mx = *(a + j);
			}
		}
		s += mx;
	}
	printf("%d ", s);
	free(a);
	return 0;
}