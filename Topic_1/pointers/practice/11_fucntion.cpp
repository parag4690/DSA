#include <iostream>
using namespace std;
void update(int *p){
    p=p+1;
    cout<<"inside"<<p<<endl;  // different
    // addres will not update outside this fun but value will update
    *p=*p+1; // abhi esliye garbage a rhi h kyuki p=p+1 k karn addres shift hogya
}
int main(){
    int value=5;
    int *p=&value;
    cout<<"before "<<p<<" "<<*p<<endl;
    
    update(p);
    cout<<"after "<<p<<" "<<*p<<" "<<value<<endl;
}