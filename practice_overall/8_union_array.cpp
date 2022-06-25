#include <iostream>
using namespace std;
int main(){
    int m=5,n=5,c=0;
    int a[m]={1,2,3,4,5};
    int b[n]={6,5,4,7,8}; 
    // uniou aUb
    int H[m+n];
    int k=5;
    for(int i=0; i<m; i++){
        H[i]=a[i];
    }
    for(int j=0; j<n; j++){
        bool check=1;
        for(int i=0; i<m; i++){
            if(b[j]==a[i]){
              check=0;
              break;
            }
        }
        if(check){
            H[k++]=b[j];
        }
    }
    for(int i=0; i<8; i++){
        cout<<H[i]<<" ";
    }
    cout<<endl;
}