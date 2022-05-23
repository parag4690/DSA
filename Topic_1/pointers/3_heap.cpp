#include <iostream>
using namespace std;
int main(){
    int *p;
    // dynamic alloctaion = create memory in heap

    p=new int[5];
    for(int i=0; i<5; i++){
        cin>>p[i];
    }
    for(int i=0; i<5; i++){
        cout<<p[i]<<endl;
    }
    
    // it should be deleted
    p=NULL; // for preventing dangelious problem
    delete []p; // array 
    cout<<p[0]<<endl; // without null it give output 
}