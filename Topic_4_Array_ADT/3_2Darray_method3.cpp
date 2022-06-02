#include <iostream>
using namespace std;
int main(){
    cout<<"Number of row ";
    int r;
    cin>>r;
    cout<<"Number of column ";
    int c;
    cin>>c;
    int **p;
    // row in heap 

    p= new int * [r]; 
    for(int i=0; i<r; i++){
        p[i]=new int[c];
    }
    // continue like 2d
     // input 

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>p[i][j];
        }
    }

    // output 


    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;    
   cout<<"d" <<p[2][3];
     
    // simple delete 

    p=NULL;
    delete []p;


    cout<<p[3][0]<<endl;
     

}