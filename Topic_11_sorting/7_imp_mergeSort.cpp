#include <bits/stdc++.h>
using namespace std;

// first merge like single list
void Merge(int *a, int l, int mid, int h)
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

    for (int i = l; l <= h; l++)  // imp
    {
        a[l] = b[l];
    }
}

void ImergeSort(int a[], int n)
{
    int p, i, l, mid, h;

    for (p = 2; p <= n; p = p * 2)
    {
        for (i = 0; i + p - 1 < n; i = i + p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(a, l, mid, h);
        }

        if (n-i > p/2)  // jb i ki condition agge excedd krdega to ye i=0 pe
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(a, l, mid, n - 1);
        } 
    }
    if (p / 2 < n)
    { // for odd length
        Merge(a, 0, p / 2 - 1, n - 1);
    }
}

int main()
{
    int n = 11;
    int a[n] = {9,7,5,3,1,2,4,6,18,10,9};

    ImergeSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}




/*
*************************************            without   that if condition        ********************





The algorithm presented works for only a specific type of input.

For ex: I/P

a b c d e f g h i ... here we obtain a tree that merges values such that

            ( a b) (c d) (e f) (g h) i

next:   ( a b c d) (e f g h) i

next:   ( a b c d e f g h) i

Now we deal with the one left out element i.e i


But what if the input is given like this?

     ex:    a b c d e f g h i j k

according to your algorithm we get

             (a b) (c d) (e f) (g h) (i j) k

next:    (a b c d) (e f g h) (i j) k

next:     (a b c d e f g h) (i j) k

Here, (i j) & k remain unsorted .. 


*/