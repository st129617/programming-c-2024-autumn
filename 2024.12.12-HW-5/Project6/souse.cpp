#include <iostream>

int main(int argc, int* argv[]) {
	int n = 0;
	int m = 0;
	scanf_s("%d %d", &n, &m);
	int* a = (int*)malloc(sizeof(int) * n);
	int* a_st = (int*)malloc(sizeof(int) * 100000);
	for (int i = 0; i < 100000; ++i) { *(a_st + i) = 0; }
	int* b = (int*)malloc(sizeof(int) * m);
	int* b_st = (int*)malloc(sizeof(int) * 100000);
	for (int i = 0; i < 100000; ++i) { *(b_st + i) = 0; }
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
		++*(a_st + *(a + i));
	}
	for (int i = 0; i < m; ++i) {
		scanf_s("%d", b + i);
		++*(b_st + *(b + i));
	}

	for (int i = 0; i < 100000; ++i) {
		if (*(a_st + i) * *(b_st + i) != 0) printf("%d ", i);

	}
	free(a); free(b); free(a_st); free(b_st);
}