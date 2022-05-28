#include <iostream>
using namespace std;
void TOH(int n , int a , int b , int c){
   if(n>0){
   TOH(n-1 , a , c , b);
   cout<<"From "<<a<<" to "<<c<<endl;
   TOH(n-1,  b, a , c);
   }
}
int main(){
    int n;
    cin>>n;
    TOH(n , 1 , 2 , 3);
   cout<<2/10<<endl;
    return 0;
}