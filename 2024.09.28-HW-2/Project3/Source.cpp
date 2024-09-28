#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	double x01 = 0;
	double y01 = 0;
	double r1 = 0;
	double x02 = 0;
	double r2 = 0;
	double y02 = 0;
	scanf_s("%lf", &x01);
	scanf_s("%lf", &y01);
	scanf_s("%lf", &r1);
	scanf_s("%lf", &x02);
	scanf_s("%lf", &y02);
	scanf_s("%lf", &r2);
	double distance = pow((pow((x02 - x01), 2) + pow((y02 - y01), 2)), 0.5);
	
	if (distance <= r1 + r2 && r1 <= distance + r2 && r2 <= r1 + distance) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return EXIT_SUCCESS;
}