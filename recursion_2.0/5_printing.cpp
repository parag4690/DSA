#include <bits/stdc++.h>
using namespace std;
void print_reverse(int n){
    if(n==0)
     return;
    cout<<n<<" ";
    print_reverse(n-1);
}


void print_seq(int n){
    if(n==0)
     return ;
    print_seq(n-1);
    cout<<n<<" ";
}


int main(){
    int n;
    cin>>n;
    print_reverse(n);
    cout<<endl;
    print_seq(n);
    cout<<endl;
}