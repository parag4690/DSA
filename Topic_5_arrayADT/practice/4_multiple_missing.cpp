#include <iostream>
using namespace std;
// my try 
void multiple(int *a  , int n){
    // mean more than 1 element is missing between two elements
    int i;
    int diff=a[0]-0;
    int diff2=diff;
    int comp;
    for(i=0; i<n; i++){
        if(a[i]-i!=diff){
            diff=a[i]-i;
            comp=diff-diff2;
            for(int j=comp; j>=1; j--){
                cout<<"missing elements is "<<a[i]-j<<endl;
            }
            diff2=diff;
        }
    }
}

// method 2 add indexis 

void multiple2(int *a , int n){
    int diff=a[0]-0;
    for(int i=0; i<n; i++){
        if(a[i]-i!=diff){
            while(diff<a[i]-i){
                cout<<"missing element is "<<i+diff<<endl;  // 
                diff++;
            }
        }
    }
}

// method 3;  faster method or any array can be  used no need to be sorted

void multiple3(int *a , int n){
   int l=a[0];
   int max=a[0];
   for(int i=0; i<n; i++){
       if(a[i]>max){
           max=a[i];
       }
   }
   int H[max]={0};
   
   // taking only 1 array o(n);  this method we call is hash table but it takes very space

   // hashing is the best solution when ever we are searching

   for(int i=0; i<n; i++){
       // dyan 
       H[a[i]]++;
   }

   for(int i=l; i<=max; i++){
       if(H[i]==0){
           cout<<"missing elements is "<<i<<endl;
       }
   }
}


int main(){
    cout<<"no. of elements ";
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // only when array is sorted

    multiple( a , n);

    // only when array is sorted

    multiple2( a , n);

    // any type of array 
    
    multiple3(a , n);
}