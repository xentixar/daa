
void quick_sort(int A[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(A, low, high);
        quick_sort(A, low, partitionIndex - 1);
        quick_sort(A, partitionIndex + 1, high);
    }
}