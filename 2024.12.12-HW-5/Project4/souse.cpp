#include <iostream>

int main()
{
    int n;
    scanf_s("%d", &n);
    int pos_sum = 0;
    int max_v = -101;
    int max_p = 0;
    int min_v = 101;
    int min_p = 0;
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", arr + i);
        if (*(arr + i) > 0)
            pos_sum += *(arr + i);

        if (*(arr + i) < min_v)
        {
            min_v = *(arr + i);
            min_p = i;
        }
        if (*(arr + i) > max_v)
        {
            max_v = *(arr + i);
            max_p = i;
        }
    }
    int x = 0;
    int a = (min_p < max_p ? min_p : max_p) + 1;
    int b = (min_p > max_p ? min_p : max_p);
    if (a != b)
    {
        x = 1;
        for (int i = a; i < b; ++i)
            x *= *(arr + i);
    }
    printf("%d %d", pos_sum, x);
    free(arr);
    return 0;
}