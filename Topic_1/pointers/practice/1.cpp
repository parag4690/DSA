# include <iostream>
using namespace std;
int main(){
    int num=5;
    cout<<&num<<endl; // addereess
    int *ptr=&num;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<++num<<endl;
    cout<<*ptr<<endl;
    cout<<++ptr<<endl; // increase adress by 4 bytes // address change hogya hai islye agge garbage value de rha h
    cout<<*ptr<<endl;  // uper vale k karn value barbage a rhi h kyuki ab pointer empty memory ki trf point kr rha hai
    (*ptr)++;
    cout<<*ptr<<endl;
}