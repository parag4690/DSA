#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a*b

#define SQUARE(x) x*x

int main(){
    cout << MULTIPLY(2+3, 3+5); // important concept its ans will 
    cout<<36/(SQUARE(6));
    return 0;
}