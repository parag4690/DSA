#include <iostream>
using namespace std;
int main(){
    cout<<"Number of rows and  Number of columns ";
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    //  int a[3][4]= {  {1,2,3,5}  , {4,5,6,6}  , {7,8,9,5}  }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}