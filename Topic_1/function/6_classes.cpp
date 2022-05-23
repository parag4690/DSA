#include <iostream>
using namespace std;
class reactangle{
    public:
    int length;
    int breadth;
    reactangle (int l=0 , int b=0){
        length=l;
        breadth=b;
    }
};
void changelength(class reactangle *p){
  p->length=20;
  cout<<"new length "<<p->length<<endl;
}
int main(){
    reactangle r(10,5);
    changelength(&r);
    cout<<"new lengtht"<< r.length<<endl;
}
