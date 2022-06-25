#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        if(a==b){
            cout<<0<<endl;
        }
        int x=(a^b);
        cout<<x<<endl;
        int z=1;
        while(z<n){
            z*=2;
            cout<<z<<endl;
        }
        if(x<n){
            cout<<1<<endl;
        }
        else if(x<z){
            cout<<2<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }    

}