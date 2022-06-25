#include <iostream>
using namespace std;
int main(){
    cout<<"no. of rows ";
    int n;
    cin>>n;
    cout<<"no. of column ";
    int m;
    cin>>m;
    int *a[n];
    for(int i=0; i<n; i++){
        a[i]= new int[m];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        a[i]=NULL;
        delete a[i];
    }
}