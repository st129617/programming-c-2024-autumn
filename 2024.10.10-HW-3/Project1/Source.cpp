#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int count_heads = 0;
	int count_tails = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		int coin = 0;
		scanf_s("%d", &coin);
		if (coin == 1) {
			count_heads += 1;
		}
		else {
			count_tails += 1;
		}
	}
	if (count_heads >= count_tails) {
		printf("%d", count_tails);
	}
	else {
		printf("%d", count_heads);
	}
	return EXIT_SUCCESS;
}