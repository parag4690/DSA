#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int **a;
    a=new int *[n];
    for(int i=0; i<n; i++){
       a[i]=new int[m];
    }
}