// using pointer;


#include <iostream>
using namespace std;
int main(){
    int *p = new int[5];
   
    for(int i=0; i<5; i++){
        cin>>p[i];
    }
    cout<<" new size "<<endl;
    int n;
    cin>>n;
    int *q = new int [n];
    // step 1) now copy the elements of P pointer to q  pointer 

    for(int i=0; i<5; i++){
        q[i]=p[i];
    }
    

    // step 2)  delete the p ( it does n't delete the p it deallocate the memory of p)

    delete p;
    
    // step 3)  new point p to q's memory

    p=q;

    // now p is pointng of q

    // step 4)  now deallocate the q 

    q=NULL;
    for(int i=5; i<7; i++){
        cin>>p[i];
        //cout<<i<<endl;
    }

    for(int i=0; i<n; i++){
        cout<<p[i]<<endl;
       // cout<<i<<endl;
    }
    p=NULL;
    delete q;
    delete p;

}