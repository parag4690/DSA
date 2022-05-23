#include <iostream>
using namespace std;
void update(int **p1){
  //  p1=p1+1;
    // kuch change hoga ?  --  no

   // *p=*p+1;
    // kuch change hoga ?  -- yes


    **p1=**p1+1; 
    // kuch change hoga ?  -- yes


}
int main(){
    int i=5;
    int *p=&i;
    int **p1=&p;



   cout<<"before "<<i<<endl;
   cout<<"before "<<p<<endl;
   cout<<"before "<<p1<<endl;

   update(p1);
   cout<<"after "<<i<<endl;
   cout<<"after "<<p<<endl;
   cout<<"after "<<p1<<endl;
}