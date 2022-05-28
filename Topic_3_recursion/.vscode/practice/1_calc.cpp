#include <iostream>
using  namespace std;
int sum(int n){
    if(n>=0){
        return sum(n-1)+n;
    }
    return 0;
}
int mul(int n){
    if(n>0){
       return mul(n-1)*n;
    }
    return 1;
}
int main(){
    cout<<"HOW MANY TIMES YOU WANT TO USE "<<endl;
    int t;
    cin>>t;
    cout<<" choose 1 for add "<<endl<< " choose 2 for multiply "<<endl;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
         int r;
         cin>>r;
        cout<<sum(r)<<endl;
        }
        else if(n==2){
            int r;
            cin>>r;
            cout<<mul(r)<<endl;
        }
    }
}