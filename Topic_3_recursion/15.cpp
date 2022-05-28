#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=1){
            cout<<0<<endl;
        }
        else if(n>=1 && n<=4){
            cout<<1<<endl;
        }
        else{
            if(n%5==0 || (n-1)%5==0){
                cout<<(n/5)*2<<endl;
            }
            else{
                cout<<(n/5)*2 + 1 <<endl;
            }
        }
    }

}    