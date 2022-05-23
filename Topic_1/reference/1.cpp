// jha pe direct func call hoga == early binding
// jha pe indirect func hoga (pointer k through )= late binding
#include <iostream>
void fun(){
    cout<<"hello";
}
using namespace std;
int main(){
    void(*ptr)()=fun;
    ptr();
}