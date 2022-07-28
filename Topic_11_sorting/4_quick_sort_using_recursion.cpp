#include <bits/stdc++.h>
using namespace std;



int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);

        do
        {
            j--;
        } while (a[j] > pivot);

        if (i < j)
        {
            swap(a[i], a[j]);
        }
    } while (i < j);

    swap(a[l], a[j]);
    return j;
}

void QuickSort(int a[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        QuickSort(a, l, j);
        QuickSort(a, j + 1, h);
    }
}

void quickSort(int *a, int size)
{
    QuickSort(a, 0, size);
}

int main()
{

    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;

    quickSort(A, n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}