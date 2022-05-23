#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int d=n;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int j=0; j<n; j++){
           if(a[j]==a[j+1]){
             d=d-1;
           }
           
        }
        cout<<d<<endl;
    }
}