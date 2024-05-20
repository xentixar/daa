void min_max_sort(int *A, int N)
{
    quick_sort(A, 0, N - 1);
    printf("\nMax: %d, Min: %d\n", A[0], A[N - 1]);
}