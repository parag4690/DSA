#include <iostream>
using namespace std;
struct reactangle{
    int lenght;
    int breadth;

};
void initialize(struct reactangle *p,int l , int b){
   p->lenght=l;
   p->breadth=b;
   
}
int area(struct reactangle r){
    return r.lenght*r.breadth;
}
int main(){
    int l,b;
    cin>>l>>b;
    struct reactangle r;
    initialize(&r , l , b);
    cout<<"length of "<<r.lenght <<" breadth "<<r.breadth<<endl;
    int p=area(r);
    cout<<"area of ractangle "<<p<<endl;
}