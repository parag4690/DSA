#include <iostream>
using namespace std;
int main(){

    int arr[5]={1,2,3,4,5};
    char c[6]="parag"; // ek character null k liye hai

    cout<< arr <<endl;  // here it print addres of first element

    cout<< c <<endl; // here it print content of c;

    // cout works diffeerent for both of them

    char *ch=&c[0];

    // dyan cout ka function different kam kr rha hai
    cout<<ch<<endl; // here it prints content in int array there prints array

    char temp = 'z';
    char *p=&temp;

    cout<<p<<endl;  // ye kya agya // we know ki char null character pe stop hota hai here we didnot 
    // define the size of char so comiler it self assumes null character so it stop there and rest\\\\\\

    char *q="avc" // ye mt krna not acceptabe , bad practice
}