#include <iostream>
using namespace std;
struct reactangle{
    int length;
    int breadth;
};
void fun(struct reactangle *p){
    p->length=20;
    cout<<"lenght inside the function "<<p->length<<endl;
}
int main(){
    struct reactangle r={10,4};
    fun(&r);
    cout<<"after calling " << r.length<<endl;
}
