#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j] && a[i]!=-1){
                count++;
                a[j]=-1;
            }
        }
        // dyan
        if(count>1){
            cout<<"duplicate element is "<<a[i]<<endl;
        }
        
    }
}