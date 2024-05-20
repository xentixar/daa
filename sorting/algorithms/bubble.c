#include <stdlib.h>

void bubble_sort(int A[], int N)
{
    int i, j, tmp;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N - i - 1; j++)
        {
            if (A[j] >= A[j + 1])
            {
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }
}