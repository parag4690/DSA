#include <bits/stdc++.h>
using namespace std;

void sayD(string *a , int n){
   if(n==0) return;
   if(n>0){
       sayD(a , n/10);
       cout<<a[n%10]<<" ";
   }
}

int main(){
    string arr[11]={"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    int n;
    cin>>n;
    sayD(arr , n);
}