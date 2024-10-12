#include <iostream>

int main(int argc, char* argv[])
{
	//ÀËßÐÌÀ!!!!!!!! ÂÑ¨ ÐÀÁÎÒÀÒÅ ÏÐÈ ÓÑËÎÂÈÈ LEFT >= 1!!!!!!!!!!!!!!!!!!!!!!
	int const N = 1000;
	int array[N] = {};
	int n = 0;
	int left = 0;
	int right = 0;
	int maximum = -1001;
	int index = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int number = 0;
		scanf_s("%d", &number);
		array[i] = number;
	}
	scanf_s("%d", &left);
	scanf_s("%d", &right);
	--left;
	--right;
	for (int j = left; j <= right; ++j)
	{
		if (array[j] > maximum)
		{
			maximum = array[j];
			index = j;
		}
	}
	printf("%d %d", maximum, index + 1);
	return EXIT_SUCCESS;
}