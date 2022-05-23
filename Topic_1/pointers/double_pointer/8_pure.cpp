// abstract pure ni krte 


#include <iostream>

using namespace std;

class parent{
    public:
   virtual void show()=0; 
};
class child:public parent{
    public:
    void show(){
        cout<<"inside child"<<endl;
    }
};
int main(){
  
   // 
   child obj;
   parent *po=&obj;
   po->show();

}