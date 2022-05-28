#include <iostream>
using namespace std;
int x=0 ;
int fun(int n){
    if(n>0){
        
        int r=fun(n-1)+x;
        cout<<x<<" "<<endl;
        x++;
        
        return r;
        // eske niche vale ni chlege 

    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
    cout<<x<<endl;
}