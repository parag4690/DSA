#include <iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int *p=new int[n];
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    for(int i=0; i<n; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    p=NULL;
    delete p;
   // cout<<p[0]<<endl;
    
}