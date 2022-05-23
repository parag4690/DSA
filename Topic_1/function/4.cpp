#include <iostream>
using namespace std;
struct reactangle {
    int length;
    int breadth;
};
void changelenght( struct reactangle *r , int l){
    r->length=l;
    cout<<"after change length "<<r->length<<endl;
}
int main(){
    int l;
    cin>>l;
    struct reactangle r={10,5};
    changelenght(&r, l);
    cout<<r.length<<endl;

}