#include <bits/stdc++.h>
using namespace std;

// no. of ways to reach on destination stars if you can step 1 or 2

int findNthstairs(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return findNthstairs(n-1)+findNthstairs(n-2);
}


int main(){
    int n;
    cin>>n;
    cout<<findNthstairs(n)<<endl;
}