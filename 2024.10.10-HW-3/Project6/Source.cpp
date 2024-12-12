#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int m = 0;
	if (a >= b) {
		m = a;
	}
	else {
		m = b;
	}
	for (int i = m; m <= a * b; i += m)
	{
		if ((i % a == 0) && (i % b == 0))
		{
			printf("%d", i);
			return EXIT_SUCCESS;
		}
	}
}