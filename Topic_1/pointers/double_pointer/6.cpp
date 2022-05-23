#include <iostream>

using namespace std;

class parent{
    public:
    void show(){
        cout<<"inside parent"<<endl;
    }
};
class child:public parent{
    public:
    void show(){
        cout<<"inside child"<<endl;
    }
};
int main(){
   child c;
   c.show(); 
   parent *p=new child();
   p->show();

   // 
   child obj;
   parent *po=&obj;
   po->show();

}