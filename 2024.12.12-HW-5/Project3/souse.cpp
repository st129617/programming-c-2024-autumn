#include <iostream>

int main(int argc, int* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	int c_ch = 0;
	int c_nch = 0;
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
		*(a + i) % 2 == 0 ? ++c_ch : ++c_nch;
	}
	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 == 1) { printf("%d ", *(a + i)); }
	}
	printf("\n");
	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 == 0) { printf("%d ", *(a + i)); }
	}
	printf("\n");
	c_ch >= c_nch ? printf("YES") : printf("NO");
	free(a);
	return 0;
}