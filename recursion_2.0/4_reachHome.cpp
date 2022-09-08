#include <bits/stdc++.h>
using namespace std;
void reachHome(int home , int me){
    if(me==home){
        cout<<"reached"<<endl;
        return;
    }
    // me agge bdhna hoga
    reachHome(home , me+1);
}
int main(){
    int home = 10;
    int me = 1;

    reachHome(home , me);
}