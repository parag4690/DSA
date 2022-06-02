#include <iostream>
using namespace std;
void insert(int *a , int n , int x){
   int i=n-1;
   while(a[i]>x && i>=0){
       a[i+1]=a[i];
       i--;
   }
   a[i+1]=x;
  
//  for(int j=0; j<n; j++){
//      cout<<a[j]<<" ";
//   }
//   cout<<endl;
   
}
int main(){
    cout<<"no of elements ";
    int n,c=0;
    cin>>n;
    cout<<"how many elements ";
    int h;
    cin>>h;
    int a[n+h];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        c++;
    }
    while(h--){
    cout<<"insert element "<<h<<" ";
    int i;
    cin>>i;
    n=n+1;
    insert(a , n, i);
    
  //  cout<<"total no. of element " <<n<<endl;
    }
 //  cout<<n<<endl;
   int s=n;
   cout<<"final outcome "<<endl;
   for(int j=0; j<s; j++){
       cout<<a[j]<<" ";
   }
   cout<<endl;
} 