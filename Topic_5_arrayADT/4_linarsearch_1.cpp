#include <iostream>
using namespace std;
int main(){
    int arr[]={8,9,4,7,6,3,10,5,14,2};
    bool check=0;
    int location;
    int search;
    cin>>search;
    
    int length=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length; i++){
        if(arr[i]==search){
            check=1;
            location=i;
            break;
        }
    }
    if(check){
        cout<<"found at "<<location<<endl;
    }
    else {
        cout<<"not found "<<endl;
    }
}