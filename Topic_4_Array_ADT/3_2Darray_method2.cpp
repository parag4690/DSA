// using pointer

#include <iostream>
using namespace std;
int main(){
    cout<<"Number of rows ";
    int r;
    cin>>r;
    cout<<"Number of columns ";
    int c;
    cin>>c;    
    //static pointer
    int *arr[r]; 
    // heap
    for(int i=0; i<r; i++){
        arr[i]= new int[c];
    }

    // input 

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    // output 


    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;    
   cout<<"d" <<arr[2][3];
    
  ///////////////////////////////                  deleting 2d array


   for(int i=0; i<r; i++){
       arr[i]=NULL;
       delete arr[i];  // mene hr usko assign kiya h esliye // esme ek array pointer hai
   }


    
    cout<<arr[2][3]<<endl;


    // 3rd method with double pointer
    

}