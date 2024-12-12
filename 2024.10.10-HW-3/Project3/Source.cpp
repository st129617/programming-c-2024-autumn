#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int bus_h = 437;
	scanf_s("%d", &n);
	int count_not_ok_bridge = 0;

	for (int i = 1; i <= n; ++i)
	{
		int bridge_height = 0;
		scanf_s("%d", &bridge_height);
		if (bridge_height <= bus_h) {
			count_not_ok_bridge = i;
			break;
		}
	}
	if (count_not_ok_bridge) {
		printf("Crash %d", count_not_ok_bridge);
	}
	else {
		printf("No crash");
	}
	return EXIT_SUCCESS;
}