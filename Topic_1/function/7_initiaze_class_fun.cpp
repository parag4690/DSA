#include <iostream>
using namespace std;
class reactangle {
    public:
    int length;
    int breadth;
    void initialize(  int l , int b){
    breadth=b;
   length=l;
    }
};

int main(){
    int l,b;
    cin>>l>>b;
    reactangle r;
    r.initialize(l , b);
    cout<<r.breadth<<endl;

}