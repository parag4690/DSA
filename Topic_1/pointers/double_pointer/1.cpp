#include <iostream>
using namespace std;
int main(){
  int i=5;
  int *p=&i;
  int **p1=&p;

  cout<<&i<<endl;
  cout<<p<<endl; // addres of i
  cout<<&p<<endl; 
  cout<<p1<<endl; // addres of p
  cout<<*p1<<endl; // value of p1 mean addres of i
  cout<<**p1<<endl; //  value of i 

}