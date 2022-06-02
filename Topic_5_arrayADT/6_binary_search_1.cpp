#include <iostream>
using namespace std;
int binsearch(int *arr , int key, int l , int h){
  int mid;
      
    while(l<=h){
       
        mid=(l+h)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
int main(){ // array must be sorted.
    int arr[]={4,8,10,15,18,21,24,27,29,33,34,37,39,43};
    int s;
    cin>>s;
    int l=0;
    int   h=13;
    cout<<binsearch(arr , s , l , h )<<endl;

}