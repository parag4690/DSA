#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], max = -9999, sec = -999;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != max)
        {
            if (a[i] >= sec)
            {
                sec = a[i];
            }
        }
    }
    cout << sec << endl;
}