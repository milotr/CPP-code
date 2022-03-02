// Quicksort - Recursion
#include "stdc++.h"
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int ar[], int start, int end)
{
    int pivot = ar[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {
        if (ar[j] < pivot)
        {
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i + 1], &ar[end]);
    return (i + 1);
}

void quickSort(int ar[], int start, int end)
{
    if (start < end)
    {
        int pi = partition(ar, start, end);

        quickSort(ar, start, pi);
        quickSort(ar, pi, end);
    }
}

void printArray(int ar[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << ar[i] << " ";
    cout << endl;
}

int main()
{
    int ar[] = {50, 1, 3, 95, 32};
    int n = sizeof(ar) / sizeof(ar[0]);
    quickSort(ar, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(ar, n);
}
