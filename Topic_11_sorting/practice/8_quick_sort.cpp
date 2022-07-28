#include <bits/stdc++.h>
using namespace std;
class quickSort{
    public:

    int partition(int *a , int l , int h){
        int pivot = a[l];
        int i = l;
        int j = h;

        do{
            do{
                i++;
            }while(a[i]<=pivot);
            do{
                j--;
            }while(a[j]>pivot);

            if(i<j){
                swap(a[i] , a[j]);
            }
        }while(i<j);

        swap(a[l] , a[j]);

        return j;
    }

    void Quicksort(int * a , int l , int h){
         int j;
         if(l<h){
             j = partition( a , l , h);
             Quicksort(a , l , j );
             Quicksort(a , j+1 , h);
         }
    }

    void display(int *a , int n){
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


};
int main(){
    int n = 5;
    int a[n]={3,2,1,6,5};

    quickSort q;
    q.Quicksort(a , 0 , n); // n-1 esliye nhi liya kyuki uper m do while se j ek bar 
    q.display(a , n);

}