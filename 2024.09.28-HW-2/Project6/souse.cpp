#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
    double a = 0;
    double b = 0;
    double c = 0;
    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    scanf_s("%lf", &c);
    double D = b * b - 4 * a * c;
    if (a == b && b == c && c == 0) {
        printf("-1");
    }
    else if (a == b && b == 0) {
        printf("0");
    }
    else if (a == 0) {
        printf("1\n");
        printf("%f", -1.0 * c / b);
    }
    else if (D > 0) {
        printf("2\n");
        printf("%f\n", (-1.0 * b - sqrt(D)) / (2.0 * a));
        printf("%f", (-1.0 * b + sqrt(D)) / (2.0 * a));
    }
    else if (D == 0) {
        printf("1\n");
        printf("%f", (-1.0 * b) / (2.0 * a));
    }
    else {
        printf("0");
    }
    return EXIT_SUCCESS;
}