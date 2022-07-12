#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n] , b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a , a+n);
    for(int j=0; j<m; j++){
        cin>>b[j];
    }
    sort(b , b+m);
    int k=0;
    int c[k];
    int i=0 , j=0 ;
    while (i<n && j<m){
        if(a[i]==b[j]){
           c[k++]=a[i++];
           j++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
           i++;
        }
    }
    // remaing
    // for(; i<n; i++){
    //     c[k++]=a[i++];
    // }
    // for(; j<m; j++){
    //     c[k++]=b[j++];
    // }

    //
    for(int l=0; l<k; l++ ){
        cout<<c[l]<<" ";
    }
    cout<<endl;
    
}