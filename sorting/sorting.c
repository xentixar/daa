#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int *, int);
void selection_sort(int *, int);
void insertion_sort(int *, int);
void quick_sort(int *, int, int);
void merge_sort(int *, int, int);
void heap_sort(int *, int);
int partition(int *, int, int);
void generate_list(int *, int);
void display(int *, int);
void merge(int *, int, int, int);
void min_max_sort(int *, int);

#include "algorithms/partition.c"
#include "algorithms/bubble.c"
#include "algorithms/insertion.c"
#include "algorithms/merge.c"
#include "algorithms/quick.c"
#include "algorithms/heap.c"
#include "algorithms/min-max.c"
#include "algorithms/selection.c"

int main()
{
    int *A, N;
    clock_t start, end;
    double time_taken;

    printf("\nEnter the list size: ");
    scanf("%d", &N);
    fflush(stdin);

    A = (int *)malloc(sizeof(int) * N);
    generate_list(A, N);

    // display(A, N);

    // start = clock();
    // bubble_sort(A, N);
    // end = clock();

    // time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // printf("\nTime taken by bubble sort is : %lf seconds\n", time_taken);

    // start = clock();
    // quick_sort(A, 0, N - 1);
    // end = clock();

    // time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // printf("\nTime taken by quick sort is : %lf seconds\n", time_taken);

    // start = clock();
    // merge_sort(A, 0, N - 1);
    // end = clock();

    // time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // printf("\nTime taken by merge sort is : %lf seconds\n", time_taken);

    // start = clock();
    // insertion_sort(A, N);
    // end = clock();

    // time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // printf("\nTime taken by insertion sort is : %lf seconds\n", time_taken);

    // start = clock();
    // heap_sort(A, N);
    // end = clock();

    // time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // printf("\nTime taken by heap sort is : %lf seconds\n", time_taken);

    // start = clock();
    // minMaxSelectionSort(A, N);
    // end = clock();

    // time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // printf("\nTime taken by min-max sort is : %lf seconds\n", time_taken);

    start = clock();
    selection_sort(A, N);
    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nTime taken by selection sort is : %lf seconds\n", time_taken);
}

void display(int A[], int N)
{
    printf("\n");
    for (size_t i = 0; i < N; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n\n");
}

void generate_list(int A[], int N)
{
    int i, num;
    srand(time(0));
    for (size_t i = 0; i < N; i++)
    {
        num = rand();
        A[i] = num;
    }
}
