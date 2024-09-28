#include <iostream>



int main(int argc, char* argv)
{
	int X1 = 0;
	int Y1 = 0;
	int X2 = 0;
	int Y2 = 0;
	scanf_s("%d", X1);
	scanf_s("%d", Y1);
	scanf_s("%d", X2);
	scanf_s("%d", Y2);
	if (X1 == X2 || Y1 == Y2 || X1 - X2 == Y1 - Y2 || X2 - X1 == Y2 - Y1 || -(X1 - X2) == Y1 - Y2 || -(X2 - X1) == Y2 - Y1) {
		printf("YES");
	}
	else {
		printf("NO");
	}

}