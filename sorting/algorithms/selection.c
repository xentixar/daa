void selection_sort(int A[], int N)
{
    int i, j, current;
    for (i = 0; i < N - 1; i++)
    {
        current = i;
        for (j = i + 1; j < N; j++)
        {
            if (A[j] < A[current])
                current = j;
        }
        if (current != i)
            swap(&A[current], &A[i]);
    }
}