#include <iostream>
using namespace std;
int main(){
    cout<<" no of rows ";
    int n;
    cin>>n;
    cout<<" no of column ";
    int c;
    cin>>c;
    int a[n][c];
    for(int i=0; i<n; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}