#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x;

} ;

  // r2 declare a variable

 // this is defination , it does not consume memory until we declare variable in main

// can we declare out side the main 

// yes

// it will be accesable for every funtion

struct Rectangle r={23,45};


int main(){
    struct Rectangle r1;
    r1.length=10;
    r1.breadth=5;
    

    printf("%lu\n" , sizeof(r1)); // d is for int  // 1 int  take 4 byte  // char take 1 byte then it should have output 9 but it gave 12; why?? 

    // char  take 4 bytes here but it doesn't matter it only use 1 byte; other 3 bytes are like padding in memory

    cout<<r.breadth<<endl;
    cout<<r.length<<endl;
    return 0;
}