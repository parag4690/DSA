#include <iostream>
using namespace std;
int main(){


int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;    // *p == *q  mean p has change the memory
(*p)++;
cout << a << " " << b << endl;

}