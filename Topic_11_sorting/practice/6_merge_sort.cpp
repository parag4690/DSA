#include <bits/stdc++.h>
using namespace std;
class mergeSort
{
public:
    int *a;
    int n;

    mergeSort(int n)
    {
        this->n = n;
        a = new int[n];
    }

    void createArray()
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    // merge sort

    void Merge(int l, int mid, int h)
    {
        int i, j, k;
        i = l, k = l, j = mid + 1;

        int b[h + 1];

        while (i <= mid && j <= h)
        {
            if (a[i] < a[j])
            {
                b[k++] = a[i++];
            }
            else
            {
                b[k++] = a[j++];
            }
        }
        while (i <= mid)
        {
            b[k++] = a[i++];
        }
        while (j <= h)
        {
            b[k++] = a[j++];
        }

        for (int i = l; l <= h; l++) // imp
        {
            a[l] = b[l];
        }
    }

    void mergesort()
    {

        int p, i, l, mid, h;

        for (p = 2; p <= n; p = p * 2)
        {
            for (i = 0; i + p - 1 < n; i = i + p)
            {
                l = i;
                h = i + p - 1;
                mid = (l + h) / 2;
                Merge(l, mid, h);
            }

            if (n - i > p / 2) // jb i ki condition agge excedd krdega to ye i=0 pe
            {
                l = i;
                h = i + p - 1;
                mid = (l + h) / 2;
                Merge(l, mid, n - 1);
            }
        }
        if (p / 2 < n)
        { // for odd length
            Merge(0, p / 2 - 1, n - 1);
        }
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    mergeSort m(n);
    m.createArray();
    m.mergesort();
    m.display();
}