#include <iostream>

int main(int argc, char* argv[]) 
{
	int n = 0;
	int m = 0;
	int nod = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	int n_two = n;
	while ((n != 0) && (m != 0))
	{
		if (n > m) 
		{
			n %= m;
		}
		else
		{
			m %= n;
		}
		nod = n + m;
	}
	printf("%d", n_two/nod);

	return EXIT_SUCCESS;
}