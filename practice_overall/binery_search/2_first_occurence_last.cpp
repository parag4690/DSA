#include <iostream>                                                                        
using namespace std;                 // 
int firstocc(int a[], int n , int x){
    int l=0;
    int e=n-1;
    int mid=(l+e)/2;
    int ans=-1;
    while(l<=e){                     
        if(x==a[mid]){
            ans=mid;
            // ab muje check krna h khi ese phle h ya nhi 
            e=mid-1;
        }
        else if(x>a[mid]){
            //
            l=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(l+e)/2;
    }
    
    return ans;
}                                                                          
int lastocc(int *a  , int n , int x){
    int l=0; 
    int h=n-1;
    int mid=(l+h)/2;
    int ans;
    while(l<=h){
        if(x==a[mid]){
            ans=mid;
            // ab muje bad me bhi check krna prega 
            l=mid+1;
        }
        else if(x>a[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        mid=(l+h)/2;
    }
    return ans;
}
int totalocc(int *a , int n , int x){
    return lastocc(a , n , x)-firstocc(a,n,x)+1;
}
//                                               
int main(){
    
    int n; 
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<"first occurence of "<<x<<" is at "<<firstocc(a , n,x)<<endl;
    cout<<"last occurence of "<<x<<" is at "<<lastocc(a , n ,x)<<endl;
    // total no. of occurence ;                                      
    //  
    cout<<"total occurence of "<<x<<" is " <<totalocc(a , n ,x)<<endl;
}