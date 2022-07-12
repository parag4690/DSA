#include <bits/stdc++.h>
using namespace std;
void update(int **p){
    **p =  12;
}
int main(){
    int *p = 0;
    int f=10;
    int z;
    p=&f;

    update(&p); // passing a pointer to function
    cout<<*p<<endl;
}