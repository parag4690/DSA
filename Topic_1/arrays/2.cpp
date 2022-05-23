#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
     int ma=-999 , mi=1000000;
     int n;
     cin>>n;
     int a[n];
    for(int i=0; i<n; i++){
       cin>>a[i];
       ma=max(a[i],ma);
       mi=min(a[i],mi);
    }
    cout<<mi<<" "<<ma<<endl;
}