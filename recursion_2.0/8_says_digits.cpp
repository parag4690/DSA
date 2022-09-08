#include <bits/stdc++.h>
using namespace std;

void digits(int n){
    switch (n)
    {
    case 1:
        cout<<"one"<<" ";
        break;
    
    case 2:
        cout<<"two"<<" ";
        break;
    
    case 3:
        cout<<"three ";
        break;
    case 4:
        cout<<"four ";
        break;
    case 5:
        cout<<"five ";
        break;
    case 6:
        cout<<"six ";
        break;
    case 7:
        cout<<"seven ";
        break;
    case 8:
        cout<<"eight ";
        break;
    case 9:
        cout<<"nine ";
        break;
    case 0:
        cout<<"zero ";
        break;
    }
    

}

void fun(int n){
    int rem ;
    if(n==0){
        return;
    }
    rem = n%10;
    fun(n/10);
    digits(rem); // dyan agr m edhr ni likhuga to ye riverse kradega;
}

int main(){
    int n;
    cin>>n;
    fun(n);
    cout<<endl;
}