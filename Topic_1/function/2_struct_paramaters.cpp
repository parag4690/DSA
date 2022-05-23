// call by value

#include <iostream>
using namespace std;
struct rectangle{
   int length;
   int breadth;
};

void fun(struct rectangle p)
{
    cout<<"lenght "<<p.length<<" breadth "<<p.breadth<<endl;
}
int main(){
 
   struct rectangle r={10,5};
   fun(r);
   cout<<r.length <<" "<<r.breadth<<endl;
     
   return 0;
}